/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 1
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "problems.h"

#include "data7/cstr.h"
#include "data7/global.h"
#include "data7/ptr.h"
#include "data7/str.h"
#include "stream/hfsystem.h"
#include "stream/stream.h"

constexpr int32_t MAX_PROBLEMS = 4096;

struct problem_t
{
    cstring_t m_Message {};
    cstring_t m_Problem {};
    cstring_t m_Additional {};
    int32_t m_Count {0};
};

check_size(problem_t, 0x10);

int32_t ProblemCount {0};             // 0x70F018
problem_t* Problems[MAX_PROBLEMS] {}; // 0x70F020

void InitProblems()
{
    while (ProblemCount)
    {
        delete Problems[--ProblemCount];
    }
}

void DumpProblems()
{
    if (/*DevelopmentMode &&*/ !LogOpenOn)
    {
        qsort(Problems, ProblemCount, sizeof(*Problems), cmpProblem);

        char path[1024];
        sprintf_s(path, "%s/problems.txt", ProjPath);

        Ptr<Stream> output {s_fopen(path, "w")};

        if (output)
        {
            fprintf(output.Get(), "Total Problems: %d\n", ProblemCount);

            for (int32_t i = 0; i < ProblemCount;)
            {
                int32_t j = i + 1;

                for (; j < ProblemCount; ++j)
                {
                    if (strcmp(Problems[i]->m_Message, Problems[j]->m_Message))
                    {
                        break;
                    }
                }

                fprintf(output.Get(), "MESSAGE: %s\n", Problems[i]->m_Message.get());

                while (i < j)
                {
                    int32_t k = i + 1;

                    for (; k < j; ++k)
                    {
                        if (strcmp(Problems[i]->m_Problem, Problems[k]->m_Problem))
                        {
                            break;
                        }
                    }

                    if (i + 1 != k || *Problems[i]->m_Additional)
                    {
                        fprintf(output.Get(), "    '%s' at locations:\n", Problems[i]->m_Problem.get());

                        for (; i < k; ++i)
                        {
                            problem_t* current = Problems[i];

                            if (current->m_Count > 1)
                            {
                                fprintf(output.Get(), "        '%s' (%d times)\n", current->m_Additional.get(),
                                    current->m_Count);
                            }
                            else
                            {
                                fprintf(output.Get(), "        '%s'\n", current->m_Additional.get());
                            }
                        }
                    }
                    else
                    {
                        fprintf(output.Get(), "    '%s'\n", Problems[i]->m_Problem.get());

                        ++i;
                    }
                }

                fprintf(output.Get(), "\n");
            }

            if (ProblemCount == 0)
            {
                fprintf(output.Get(), "You are problem-free!\n");
            }
        }
    }

    InitProblems();
}

void RegisterProblem(const char* message, const char* problem, const char* additional)
{
    if (ProblemCount == MAX_PROBLEMS)
    {
        return;
    }

    message = message ? message : "";
    problem = problem ? problem : "";
    additional = additional ? additional : "";

    for (int32_t i = 0; i < ProblemCount; ++i)
    {
        problem_t* current = Problems[i];

        if (!strcmp(current->m_Message, message) && !strcmp(current->m_Problem, problem) &&
            !strcmp(current->m_Additional, additional))
        {
            ++current->m_Count;

            return;
        }
    }

    Problems[ProblemCount++] = new problem_t {message, problem, additional, 1};

    if (ProblemCount == MAX_PROBLEMS - 1)
    {
        RegisterProblem("Out of space in problem database", nullptr, "Problem Database");
    }
}

int32_t cmpProblem(void const* lhs, void const* rhs)
{
    const problem_t* left = *static_cast<const problem_t* const*>(lhs);
    const problem_t* right = *static_cast<const problem_t* const*>(rhs);

    int32_t result = strcmp(left->m_Message, right->m_Message);

    if (result)
    {
        return result;
    }

    result = strcmp(left->m_Problem, right->m_Problem);

    if (result)
    {
        return result;
    }

    return strcmp(left->m_Additional, right->m_Additional);
}

define_dummy_symbol(problems);

run_once([] {
    auto_hook(0x542930, InitProblems);
    auto_hook(0x542990, DumpProblems);
    auto_hook(0x542C80, RegisterProblem);
});
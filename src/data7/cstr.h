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

#pragma once

char* StringDuplicate(const char* value);

struct cstring_t
{
    char* m_pData {nullptr};

    inline constexpr cstring_t() noexcept
        : m_pData(nullptr)
    {}

    inline cstring_t(const char* value)
    {
        assign(value);
    }

    inline cstring_t(const cstring_t& other)
        : cstring_t(other.m_pData)
    {}

    inline cstring_t(cstring_t&& other) noexcept
    {
        m_pData = other.m_pData;
        other.m_pData = nullptr;
    }

    inline cstring_t& operator=(const char* value)
    {
        assign(value);

        return *this;
    }

    inline cstring_t& operator=(const cstring_t& value)
    {
        assign(value.m_pData);

        return *this;
    }

    inline cstring_t& operator=(cstring_t&& value) noexcept
    {
        delete[] m_pData;
        m_pData = value.m_pData;
        value.m_pData = nullptr;

        return *this;
    }

    inline ~cstring_t() noexcept
    {
        delete[] m_pData;
    }

    inline void assign(const char* value)
    {
        delete[] m_pData;
        m_pData = StringDuplicate(value);
    }

    inline operator char*() noexcept
    {
        return m_pData;
    }

    inline char* get() noexcept
    {
        return m_pData;
    }

    inline operator const char*() const noexcept
    {
        return m_pData;
    }

    inline const char* get() const noexcept
    {
        return m_pData;
    }
};

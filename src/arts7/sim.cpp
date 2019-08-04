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

#include "sim.h"

#include "agi/light.h"
#include "agi/pipeline.h"
#include "agi/print.h"
#include "eventq7/replay.h"
#include "midtown.h"

artsReplayChannel::artsReplayChannel()
    : eqReplayChannel('SIM0')
{}

artsReplayChannel::~artsReplayChannel() = default;

static extern_var(0x6F2AB8, bool32_t, s_bPipeInit);

static extern_var(0x6F2ACC, int32_t, s_nCurrentPipeWidth);
static extern_var(0x6F2ABC, int32_t, s_nCurrentPipeHeight);

static extern_var(0x6F2A40, agiLight*, s_pSunLight);

int32_t InitPipeline(const char* /*title*/, int32_t argc, char** argv)
{
    if (s_bPipeInit)
    {
        Quitf("Tried to InitPipeline twice.");
    }

    s_bPipeInit = 1;

    Argc = argc;
    Argv = argv;

    agiPipeline::CurrentPipe = CreatePipeline(argc, argv);

    if (agiPipeline::CurrentPipe->Validate())
    {
        Quit("Couldn't start renderer");
    }

    s_nCurrentPipeWidth = agiPipeline::CurrentPipe->m_Width;
    s_nCurrentPipeHeight = agiPipeline::CurrentPipe->m_Height;

    agiPipeline::CurrentPipe->m_hWnd = CreatePipelineAttachableWindow(
        APPTITLE, 0, 0, agiPipeline::CurrentPipe->m_Width, agiPipeline::CurrentPipe->m_Height, 0);

    int32_t result = agiPipeline::CurrentPipe->BeginAllGfx();

    if (!result)
    {
        agiPrintInit();

        agiPipeline::CurrentPipe->ClearAll(0);
    }

    return result;
}

void ShutdownPipeline()
{
    if (s_bPipeInit)
    {
        s_bPipeInit = 0;

        if (s_pSunLight)
        {
            s_pSunLight->Release();
        }

        agiPrintShutdown();

        agiPipeline::CurrentPipe->EndAllGfx();

        delete agiPipeline::CurrentPipe;
        agiPipeline::CurrentPipe = 0;

        DestroyPipelineAttachableWindow();

        if (eqReplay::Recording)
        {
            eqReplay::ShutdownRecord();
        }
    }
    else
    {
        Errorf("ShutdownPipeline w/out InitPipeline.");
    }
}

define_dummy_symbol(sim);

run_once([] {
    auto_hook(0x510600, InitPipeline);
    auto_hook(0x5106C0, ShutdownPipeline);
});
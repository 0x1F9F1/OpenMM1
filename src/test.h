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

// test

#include "hooking.h"

// 0x401030 | ?CreatePipeline@@YAPAVagiPipeline@@HPAPAD@Z
inline class agiPipeline* CreatePipeline(int32_t arg1, char** arg2)
{
    return stub<cdecl_t<class agiPipeline*, int32_t, char**>>(0x401030, arg1, arg2);
}

// 0x401250 | ?GenerateLoadScreenName@@YAHXZ
inline int32_t GenerateLoadScreenName()
{
    return stub<cdecl_t<int32_t>>(0x401250);
}

// 0x401430 | ?GameFilter@@YAHPAU_EXCEPTION_POINTERS@@@Z
inline int32_t GameFilter(struct _EXCEPTION_POINTERS* arg1)
{
    return stub<cdecl_t<int32_t, struct _EXCEPTION_POINTERS*>>(0x401430, arg1);
}

// 0x401520 | ?GameLoop@@YAXPAVmmInterface@@PAVmmGameManager@@PAD@Z
inline void GameLoop(class mmInterface* arg1, class mmGameManager* arg2, char* arg3)
{
    return stub<cdecl_t<void, class mmInterface*, class mmGameManager*, char*>>(0x401520, arg1, arg2, arg3);
}

// 0x401670 | ?ApplicationHelper@@YAXHPAPAD@Z
inline void ApplicationHelper(int32_t arg1, char** arg2)
{
    return stub<cdecl_t<void, int32_t, char**>>(0x401670, arg1, arg2);
}

// 0x402550 | ?InitAudioManager@@YAXXZ
inline void InitAudioManager()
{
    return stub<cdecl_t<void>>(0x402550);
}

// 0x4026D0 | ?Application@@YAXHPAPAD@Z
inline void Application(int32_t arg1, char** arg2)
{
    return stub<cdecl_t<void, int32_t, char**>>(0x4026D0, arg1, arg2);
}

// 0x4027B0 | _WinMain@16

// 0x5A47C0 | ?CycleTime@@3MA
inline extern_var(0x5A47C0, float, CycleTime);

// 0x5A47C4 | ?page_override@@3HA
inline extern_var(0x5A47C4, int32_t, page_override);

// 0x5A47C8 | ?GlobalDamageScale@@3MA
inline extern_var(0x5A47C8, float, GlobalDamageScale);

// 0x5A47CC | ?APPTITLE@@3PADA
inline extern_var(0x5A47CC, char*, APPTITLE);

// 0x5A47D0 | ?VERSION_STRING@@3PADA
inline extern_var(0x5A47D0, char*, VERSION_STRING);

// 0x5D3E64 | ?bHaveIME@@3HA
inline extern_var(0x5D3E64, int32_t, bHaveIME);

// 0x5D3E68 | ?LoadScreen@@3PADA
inline extern_var(0x5D3E68, char*, LoadScreen);

// 0x5D3E90 | ?__VtResumeSampling@@3P6AHXZA
inline extern_var(0x5D3E90, int32_t(__cdecl*)(void), __VtResumeSampling);

// 0x5D4298 | ?LoadTimer@@3VTimer@@A
inline extern_var(0x5D4298, class Timer, LoadTimer);

// 0x5D44A0 | ?__VtPauseSampling@@3P6AHXZA
inline extern_var(0x5D44A0, int32_t(__cdecl*)(void), __VtPauseSampling);

// 0x5D44A4 | ?SystemStatsRecord@@3PAVmmGameRecord@@A
inline extern_var(0x5D44A4, class mmGameRecord*, SystemStatsRecord);

// 0x5D44A8 | ?hImmContext@@3KA
inline extern_var(0x5D44A8, uint32_t, hImmContext);

// 0x5D44B0 | ?CityName@@3PADA
inline extern_var(0x5D44B0, char*, CityName);

// 0x5D44D8 | ?CycleState@@3HA
inline extern_var(0x5D44D8, int32_t, CycleState);

// 0x5D44DC | ?GraphicsChange@@3EA
inline extern_var(0x5D44DC, uint8_t, GraphicsChange);

// 0x5D44E0 | ?GraphicsPreviousMenu@@3EA
inline extern_var(0x5D44E0, uint8_t, GraphicsPreviousMenu);

// 0x5D44E4 | ?BlitzCheatTime@@3HA
inline extern_var(0x5D44E4, int32_t, BlitzCheatTime);

// 0x5D44E8 | ?AllCars@@3HA
inline extern_var(0x5D44E8, int32_t, AllCars);

// 0x402480 | ?TouchMemory@@YAXPAXH@Z
inline void TouchMemory(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x402480, arg1, arg2);
}

// 0x4024D0 | ?exeDirFile@@YAPADPADH0@Z
inline char* exeDirFile(char* arg1, int32_t arg2, char* arg3)
{
    return stub<cdecl_t<char*, char*, int32_t, char*>>(0x4024D0, arg1, arg2, arg3);
}

// 0x402530 | ?GameCloseCallback@@YAXXZ
inline void GameCloseCallback()
{
    return stub<cdecl_t<void>>(0x402530);
}

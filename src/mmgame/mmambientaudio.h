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

/*
    mmgame:mmambientaudio

    0x41EF10 | public: __thiscall mmAmbientAudio::mmAmbientAudio(class mmPlayer *) | ??0mmAmbientAudio@@QAE@PAVmmPlayer@@@Z
    0x41EFB0 | public: __thiscall mmAmbientAudio::~mmAmbientAudio(void) | ??1mmAmbientAudio@@QAE@XZ
    0x41EFC0 | public: void __thiscall mmAmbientAudio::Update(void) | ?Update@mmAmbientAudio@@QAEXXZ
*/

struct mmAmbientAudio
{
public:
    // 0x41EF10 | ??0mmAmbientAudio@@QAE@PAVmmPlayer@@@Z
    inline mmAmbientAudio(class mmPlayer* arg1)
    {
        // stub<member_func_t<void, mmAmbientAudio, class mmPlayer*>>(0x41EF10, this, arg1);

        unimplemented();
    }

    // 0x41EFB0 | ??1mmAmbientAudio@@QAE@XZ
    inline ~mmAmbientAudio()
    {
        stub<member_func_t<void, mmAmbientAudio>>(0x41EFB0, this);
    }

    // 0x41EFC0 | ?Update@mmAmbientAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmAmbientAudio>>(0x41EFC0, this);
    }
};

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
    agi:bitmap

    0x53C380 | public: __thiscall agiBitmap::agiBitmap(class agiPipeline *) | ??0agiBitmap@@QAE@PAVagiPipeline@@@Z
    0x53C3C0 | public: int __thiscall agiBitmap::Init(char *,float,float,int) | ?Init@agiBitmap@@QAEHPADMMH@Z
    0x53C5D0 | public: void __thiscall agiBitmap::SetTransparency(int) | ?SetTransparency@agiBitmap@@QAEXH@Z
    0x53C600 | public: virtual void __thiscall agiBitmap::UpdateFlags(void) | ?UpdateFlags@agiBitmap@@UAEXXZ
    0x53C610 | protected: virtual __thiscall agiBitmap::~agiBitmap(void) | ??1agiBitmap@@MAE@XZ
    0x53C6A0 | public: virtual char * __thiscall agiBitmap::GetName(void) | ?GetName@agiBitmap@@UAEPADXZ
    0x53C6C0 | protected: virtual void * __thiscall agiBitmap::`vector deleting destructor'(unsigned int) | ??_EagiBitmap@@MAEPAXI@Z
    0x53C6C0 | protected: virtual void * __thiscall agiBitmap::`scalar deleting destructor'(unsigned int) | ??_GagiBitmap@@MAEPAXI@Z
    0x595C40 | const agiBitmap::`vftable' | ??_7agiBitmap@@6B@
    0x5C3610 | char * BitmapSearchPath | ?BitmapSearchPath@@3PADA
    0x706618 | class HashTable BitmapHash | ?BitmapHash@@3VHashTable@@A
*/

#include "hooking.h"

// 0x5C3610 | ?BitmapSearchPath@@3PADA
inline extern_var(0x5C3610, char*, BitmapSearchPath);

// 0x706618 | ?BitmapHash@@3VHashTable@@A
inline extern_var(0x706618, class HashTable, BitmapHash);

class agiBitmap : agiRefreshable
{
public:
    // agiBitmap::`vftable' @ 0x595C40

    // 0x53C380 | ??0agiBitmap@@QAE@PAVagiPipeline@@@Z
    inline agiBitmap(class agiPipeline* arg1)
    {
        stub<member_func_t<void, agiBitmap, class agiPipeline*>>(0x53C380, this, arg1);
    }

    // 0x53C3C0 | ?Init@agiBitmap@@QAEHPADMMH@Z
    inline int32_t Init(char* arg1, float arg2, float arg3, int32_t arg4)
    {
        return stub<member_func_t<int32_t, agiBitmap, char*, float, float, int32_t>>(
            0x53C3C0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53C5D0 | ?SetTransparency@agiBitmap@@QAEXH@Z
    inline void SetTransparency(int32_t arg1)
    {
        return stub<member_func_t<void, agiBitmap, int32_t>>(0x53C5D0, this, arg1);
    }

    // 0x53C6A0 | ?GetName@agiBitmap@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, agiBitmap>>(0x53C6A0, this);
    }

    // 0x53C610 | ??1agiBitmap@@MAE@XZ
    inline ~agiBitmap() override
    {
        stub<member_func_t<void, agiBitmap>>(0x53C610, this);
    }

    // 0x53C600 | ?UpdateFlags@agiBitmap@@UAEXXZ
    virtual inline void UpdateFlags()
    {
        return stub<member_func_t<void, agiBitmap>>(0x53C600, this);
    }
};

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

// mmcamcs:trackcamcs

#include "hooking.h"

// 0x67B648 | ?TrackCamCSMetaClass@@3VMetaClass@@A
inline extern_var(0x67B648, class MetaClass, TrackCamCSMetaClass);

// 0x4EB410 | ?new_TrackCamCS@@YAPAXH@Z
inline void* new_TrackCamCS(int32_t arg1)
{
    return stub<cdecl_t<void*, int32_t>>(0x4EB410, arg1);
}

// 0x4EB4E0 | ?delete_TrackCamCS@@YAXPAXH@Z
inline void delete_TrackCamCS(void* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, void*, int32_t>>(0x4EB4E0, arg1, arg2);
}

struct TrackCamCS : CarCamCS
{
public:
    // TrackCamCS::`vftable' @ 0x594B68

    // 0x4E9510 | ??0TrackCamCS@@QAE@XZ
    inline TrackCamCS()
    {
        stub<member_func_t<void, TrackCamCS>>(0x4E9510, this);
    }

    // 0x4E9980 | ?UpdateCar@TrackCamCS@@AAEXXZ
    inline void UpdateCar()
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9980, this);
    }

    // 0x4E9B20 | ?UpdateHill@TrackCamCS@@AAEXXZ
    inline void UpdateHill()
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9B20, this);
    }

    // 0x4E9B30 | ?UpdateTrack@TrackCamCS@@AAEXXZ
    inline void UpdateTrack()
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9B30, this);
    }

    // 0x4EA460 | ?UpdateSwing@TrackCamCS@@AAEXXZ
    inline void UpdateSwing()
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4EA460, this);
    }

    // 0x4EA840 | ?PreApproach@TrackCamCS@@AAEXXZ
    inline void PreApproach()
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4EA840, this);
    }

    // 0x4EAA40 | ?MinMax@TrackCamCS@@AAEXVMatrix34@@@Z
    inline void MinMax(class Matrix34 arg1)
    {
        return stub<member_func_t<void, TrackCamCS, class Matrix34>>(0x4EAA40, this, arg1);
    }

    // 0x4EAC00 | ?Collide@TrackCamCS@@AAEXVVector3@@@Z
    inline void Collide(class Vector3 arg1)
    {
        return stub<member_func_t<void, TrackCamCS, class Vector3>>(0x4EAC00, this, arg1);
    }

    // 0x4EB0A0 | ?SwingToRear@TrackCamCS@@QAEXXZ
    inline void SwingToRear()
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4EB0A0, this);
    }

    // 0x4EB110 | ?Front@TrackCamCS@@AAEXM@Z
    inline void Front(float arg1)
    {
        return stub<member_func_t<void, TrackCamCS, float>>(0x4EB110, this, arg1);
    }

    // 0x4EB190 | ?Rear@TrackCamCS@@AAEXM@Z
    inline void Rear(float arg1)
    {
        return stub<member_func_t<void, TrackCamCS, float>>(0x4EB190, this, arg1);
    }

    // 0x4EB210 | ?DeclareFields@TrackCamCS@@SAXXZ
    static inline void DeclareFields()
    {
        return stub<cdecl_t<void>>(0x4EB210);
    }

    // 0x4E97B0 | ??1TrackCamCS@@UAE@XZ
    inline ~TrackCamCS() override
    {
        stub<member_func_t<void, TrackCamCS>>(0x4E97B0, this);
    }

    // 0x4EB530 | ?GetClass@TrackCamCS@@UAEPAVMetaClass@@XZ
    inline class MetaClass* GetClass() override
    {
        return stub<member_func_t<class MetaClass*, TrackCamCS>>(0x4EB530, this);
    }

    // 0x4E9840 | ?AfterLoad@TrackCamCS@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9840, this);
    }

    // 0x4E9890 | ?Update@TrackCamCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9890, this);
    }

    // 0x4E9850 | ?Reset@TrackCamCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9850, this);
    }

    // 0x4E9800 | ?MakeActive@TrackCamCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9800, this);
    }

    // 0x4E9970 | ?UpdateInput@TrackCamCS@@UAEXXZ
    inline void UpdateInput() override
    {
        return stub<member_func_t<void, TrackCamCS>>(0x4E9970, this);
    }
};

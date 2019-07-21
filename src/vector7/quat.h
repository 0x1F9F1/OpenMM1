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
    vector7:quat

    0x5540A0 | public: void __thiscall Quaternion::Init(float,float,float,float) | ?Init@Quaternion@@QAEXMMMM@Z
    0x5541F0 | public: void __thiscall Quaternion::FromMatrix(class Matrix34 const &) | ?FromMatrix@Quaternion@@QAEXABVMatrix34@@@Z
    0x554340 | public: class Quaternion __thiscall Quaternion::operator~(void) const | ??SQuaternion@@QBE?AV0@XZ
    0x5543E0 | public: float __thiscall Quaternion::Mag(void) const | ?Mag@Quaternion@@QBEMXZ
    0x5544B0 | public: void __thiscall Quaternion::Normalize(void) | ?Normalize@Quaternion@@QAEXXZ
    0x554510 | public: float __thiscall Quaternion::Angle(class Quaternion const &) const | ?Angle@Quaternion@@QBEMABV1@@Z
    0x554580 | public: void __thiscall Quaternion::TrackBall(float,float,float,float,float) | ?TrackBall@Quaternion@@QAEXMMMMM@Z
    0x554830 | public: void __thiscall Quaternion::Lerp(float,class Quaternion const &,class Quaternion const &) | ?Lerp@Quaternion@@QAEXMABV1@0@Z
    0x554AB0 | public: void __thiscall Quaternion::Slerp(float,class Quaternion const &,class Quaternion const &) | ?Slerp@Quaternion@@QAEXMABV1@0@Z
    0x554C70 | public: int __thiscall Quaternion::Approach(class Quaternion const &,float,float) | ?Approach@Quaternion@@QAEHABV1@MM@Z
    0x554CF0 | public: void __thiscall Quaternion::CatmullRom(float,class Quaternion const &,class Quaternion const &,class Quaternion const &,class Quaternion const &) | ?CatmullRom@Quaternion@@QAEXMABV1@000@Z
*/

class Quaternion
{
public:
    float x {0.0f}, y {0.0f}, z {0.0f}, w {1.0f};

    // 0x5540A0 | ?Init@Quaternion@@QAEXMMMM@Z
    inline void Init(float arg1, float arg2, float arg3, float arg4)
    {
        return stub<member_func_t<void, Quaternion, float, float, float, float>>(
            0x5540A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x5541F0 | ?FromMatrix@Quaternion@@QAEXABVMatrix34@@@Z
    inline void FromMatrix(class Matrix34 const& arg1)
    {
        return stub<member_func_t<void, Quaternion, class Matrix34 const&>>(0x5541F0, this, arg1);
    }

    // 0x554340 | ??SQuaternion@@QBE?AV0@XZ
    inline class Quaternion operator~()
    {
        return stub<member_func_t<class Quaternion, Quaternion>>(0x554340, this);
    }

    // 0x5543E0 | ?Mag@Quaternion@@QBEMXZ
    inline float Mag()
    {
        return stub<member_func_t<float, Quaternion>>(0x5543E0, this);
    }

    // 0x5544B0 | ?Normalize@Quaternion@@QAEXXZ
    inline void Normalize()
    {
        return stub<member_func_t<void, Quaternion>>(0x5544B0, this);
    }

    // 0x554510 | ?Angle@Quaternion@@QBEMABV1@@Z
    inline float Angle(class Quaternion const& arg1)
    {
        return stub<member_func_t<float, Quaternion, class Quaternion const&>>(0x554510, this, arg1);
    }

    // 0x554580 | ?TrackBall@Quaternion@@QAEXMMMMM@Z
    inline void TrackBall(float arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<void, Quaternion, float, float, float, float, float>>(
            0x554580, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x554830 | ?Lerp@Quaternion@@QAEXMABV1@0@Z
    inline void Lerp(float arg1, class Quaternion const& arg2, class Quaternion const& arg3)
    {
        return stub<member_func_t<void, Quaternion, float, class Quaternion const&, class Quaternion const&>>(
            0x554830, this, arg1, arg2, arg3);
    }

    // 0x554AB0 | ?Slerp@Quaternion@@QAEXMABV1@0@Z
    inline void Slerp(float arg1, class Quaternion const& arg2, class Quaternion const& arg3)
    {
        return stub<member_func_t<void, Quaternion, float, class Quaternion const&, class Quaternion const&>>(
            0x554AB0, this, arg1, arg2, arg3);
    }

    // 0x554C70 | ?Approach@Quaternion@@QAEHABV1@MM@Z
    inline int32_t Approach(class Quaternion const& arg1, float arg2, float arg3)
    {
        return stub<member_func_t<int32_t, Quaternion, class Quaternion const&, float, float>>(
            0x554C70, this, arg1, arg2, arg3);
    }

    // 0x554CF0 | ?CatmullRom@Quaternion@@QAEXMABV1@000@Z
    inline void CatmullRom(float arg1, class Quaternion const& arg2, class Quaternion const& arg3,
        class Quaternion const& arg4, class Quaternion const& arg5)
    {
        return stub<member_func_t<void, Quaternion, float, class Quaternion const&, class Quaternion const&,
            class Quaternion const&, class Quaternion const&>>(0x554CF0, this, arg1, arg2, arg3, arg4, arg5);
    }
};

check_size(Quaternion, 16);
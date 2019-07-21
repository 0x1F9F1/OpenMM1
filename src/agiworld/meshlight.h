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
    agiworld:meshlight

    0x500700 | void __cdecl agiMeshLighterReset(void) | ?agiMeshLighterReset@@YAXXZ
    0x5007F0 | void __cdecl agiMeshLighterQuarter(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *) | ?agiMeshLighterQuarter@@YAXPAEPAI1PAVagiMeshSet@@@Z
    0x5009B0 | void __cdecl agiMeshLighterUpdateColors(void) | ?agiMeshLighterUpdateColors@@YAXXZ
    0x500BA0 | void __cdecl agiMeshLighterTriple(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *) | ?agiMeshLighterTriple@@YAXPAEPAI1PAVagiMeshSet@@@Z
    0x5010D0 | void __cdecl agiMeshPrelight(unsigned int *,class agiMeshSet *,class Matrix34 &) | ?agiMeshPrelight@@YAXPAIPAVagiMeshSet@@AAVMatrix34@@@Z
    0x5012A0 | void __cdecl agiBeginCones(void) | ?agiBeginCones@@YAXXZ
    0x5012B0 | void __cdecl agiDeclareCone(class Vector3 &,class Vector3 &,class Vector3 &,float,float,class Vector3 &,int) | ?agiDeclareCone@@YAXAAVVector3@@00MM0H@Z
    0x501380 | void __cdecl agiConeLighter(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *) | ?agiConeLighter@@YAXPAEPAI1PAVagiMeshSet@@@Z
    0x5019A0 | void __cdecl agiDrawCones(void) | ?agiDrawCones@@YAXXZ
    0x5019E0 | void __cdecl agiMeshLighterSpecular(unsigned char *,unsigned int *,unsigned int *,class agiMeshSet *) | ?agiMeshLighterSpecular@@YAXPAEPAI1PAVagiMeshSet@@@Z
    0x5B8530 | float agiMeshLighterMin | ?agiMeshLighterMin@@3MA
    0x5B8534 | float agiMeshLighterMax | ?agiMeshLighterMax@@3MA
    0x5B8538 | float agiMeshLighterConeRange2 | ?agiMeshLighterConeRange2@@3MA
    0x5B8540 | float agiMeshLighterSpecularExponent | ?agiMeshLighterSpecularExponent@@3MA
    0x69F6A0 | union mmx minus1 | ?minus1@@3Tmmx@@A
    0x69F6A8 | class Vector3 agiMeshLighterSunColor | ?agiMeshLighterSunColor@@3VVector3@@A
    0x69F6B8 | union mmx zero | ?zero@@3Tmmx@@A
    0x69F6C0 | union mmx keyColor | ?keyColor@@3Tmmx@@A
    0x6A08E0 | class Vector3 agiMeshLighterSun | ?agiMeshLighterSun@@3VVector3@@A
    0x6A08F0 | class Vector3 agiMeshLighterFill1 | ?agiMeshLighterFill1@@3VVector3@@A
    0x6A0900 | class Vector3 agiMeshLighterFill2 | ?agiMeshLighterFill2@@3VVector3@@A
    0x6A0910 | class Vector3 agiMeshLighterSpecularColor | ?agiMeshLighterSpecularColor@@3VVector3@@A
    0x6A0920 | union mmx unclampSSS_3_10 | ?unclampSSS_3_10@@3Tmmx@@A
    0x6A0928 | class Vector3 agiMeshLighterAmbient | ?agiMeshLighterAmbient@@3VVector3@@A
    0x6A0938 | union mmx ambColor | ?ambColor@@3Tmmx@@A
    0x6A0940 | union mmx clampSSS_3_10 | ?clampSSS_3_10@@3Tmmx@@A
    0x6A0948 | union mmx fill1Color | ?fill1Color@@3Tmmx@@A
    0x6A0950 | class Vector3 agiMeshLighterFill2Color | ?agiMeshLighterFill2Color@@3VVector3@@A
    0x6A0970 | class Vector3 agiMeshLighterFill1Color | ?agiMeshLighterFill1Color@@3VVector3@@A
    0x6A0980 | union mmx fill2Color | ?fill2Color@@3Tmmx@@A
    0x500FA0 | void __cdecl mmxTriple(unsigned int *,unsigned int *,int,unsigned char *,int) | ?mmxTriple@@YAXPAI0HPAEH@Z
    0x501760 | void __cdecl agiInitCones(class Matrix34 &,float) | ?agiInitCones@@YAXAAVMatrix34@@M@Z
*/

// 0x500700 | ?agiMeshLighterReset@@YAXXZ
inline void agiMeshLighterReset()
{
    return stub<cdecl_t<void>>(0x500700);
}

// 0x5007F0 | ?agiMeshLighterQuarter@@YAXPAEPAI1PAVagiMeshSet@@@Z
inline void agiMeshLighterQuarter(uint8_t* arg1, uint32_t* arg2, uint32_t* arg3, class agiMeshSet* arg4)
{
    return stub<cdecl_t<void, uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*>>(0x5007F0, arg1, arg2, arg3, arg4);
}

// 0x5009B0 | ?agiMeshLighterUpdateColors@@YAXXZ
inline void agiMeshLighterUpdateColors()
{
    return stub<cdecl_t<void>>(0x5009B0);
}

// 0x500BA0 | ?agiMeshLighterTriple@@YAXPAEPAI1PAVagiMeshSet@@@Z
inline void agiMeshLighterTriple(uint8_t* arg1, uint32_t* arg2, uint32_t* arg3, class agiMeshSet* arg4)
{
    return stub<cdecl_t<void, uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*>>(0x500BA0, arg1, arg2, arg3, arg4);
}

// 0x5010D0 | ?agiMeshPrelight@@YAXPAIPAVagiMeshSet@@AAVMatrix34@@@Z
inline void agiMeshPrelight(uint32_t* arg1, class agiMeshSet* arg2, class Matrix34& arg3)
{
    return stub<cdecl_t<void, uint32_t*, class agiMeshSet*, class Matrix34&>>(0x5010D0, arg1, arg2, arg3);
}

// 0x5012A0 | ?agiBeginCones@@YAXXZ
inline void agiBeginCones()
{
    return stub<cdecl_t<void>>(0x5012A0);
}

// 0x5012B0 | ?agiDeclareCone@@YAXAAVVector3@@00MM0H@Z
inline void agiDeclareCone(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, float arg4, float arg5,
    class Vector3& arg6, int32_t arg7)
{
    return stub<cdecl_t<void, class Vector3&, class Vector3&, class Vector3&, float, float, class Vector3&, int32_t>>(
        0x5012B0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// 0x501380 | ?agiConeLighter@@YAXPAEPAI1PAVagiMeshSet@@@Z
inline void agiConeLighter(uint8_t* arg1, uint32_t* arg2, uint32_t* arg3, class agiMeshSet* arg4)
{
    return stub<cdecl_t<void, uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*>>(0x501380, arg1, arg2, arg3, arg4);
}

// 0x5019A0 | ?agiDrawCones@@YAXXZ
inline void agiDrawCones()
{
    return stub<cdecl_t<void>>(0x5019A0);
}

// 0x5019E0 | ?agiMeshLighterSpecular@@YAXPAEPAI1PAVagiMeshSet@@@Z
inline void agiMeshLighterSpecular(uint8_t* arg1, uint32_t* arg2, uint32_t* arg3, class agiMeshSet* arg4)
{
    return stub<cdecl_t<void, uint8_t*, uint32_t*, uint32_t*, class agiMeshSet*>>(0x5019E0, arg1, arg2, arg3, arg4);
}

// 0x5B8530 | ?agiMeshLighterMin@@3MA
inline extern_var(0x5B8530, float, agiMeshLighterMin);

// 0x5B8534 | ?agiMeshLighterMax@@3MA
inline extern_var(0x5B8534, float, agiMeshLighterMax);

// 0x5B8538 | ?agiMeshLighterConeRange2@@3MA
inline extern_var(0x5B8538, float, agiMeshLighterConeRange2);

// 0x5B8540 | ?agiMeshLighterSpecularExponent@@3MA
inline extern_var(0x5B8540, float, agiMeshLighterSpecularExponent);

// 0x69F6A0 | ?minus1@@3Tmmx@@A
inline extern_var(0x69F6A0, union mmx, minus1);

// 0x69F6A8 | ?agiMeshLighterSunColor@@3VVector3@@A
inline extern_var(0x69F6A8, class Vector3, agiMeshLighterSunColor);

// 0x69F6B8 | ?zero@@3Tmmx@@A
inline extern_var(0x69F6B8, union mmx, zero);

// 0x69F6C0 | ?keyColor@@3Tmmx@@A
inline extern_var(0x69F6C0, union mmx, keyColor);

// 0x6A08E0 | ?agiMeshLighterSun@@3VVector3@@A
inline extern_var(0x6A08E0, class Vector3, agiMeshLighterSun);

// 0x6A08F0 | ?agiMeshLighterFill1@@3VVector3@@A
inline extern_var(0x6A08F0, class Vector3, agiMeshLighterFill1);

// 0x6A0900 | ?agiMeshLighterFill2@@3VVector3@@A
inline extern_var(0x6A0900, class Vector3, agiMeshLighterFill2);

// 0x6A0910 | ?agiMeshLighterSpecularColor@@3VVector3@@A
inline extern_var(0x6A0910, class Vector3, agiMeshLighterSpecularColor);

// 0x6A0920 | ?unclampSSS_3_10@@3Tmmx@@A
inline extern_var(0x6A0920, union mmx, unclampSSS_3_10);

// 0x6A0928 | ?agiMeshLighterAmbient@@3VVector3@@A
inline extern_var(0x6A0928, class Vector3, agiMeshLighterAmbient);

// 0x6A0938 | ?ambColor@@3Tmmx@@A
inline extern_var(0x6A0938, union mmx, ambColor);

// 0x6A0940 | ?clampSSS_3_10@@3Tmmx@@A
inline extern_var(0x6A0940, union mmx, clampSSS_3_10);

// 0x6A0948 | ?fill1Color@@3Tmmx@@A
inline extern_var(0x6A0948, union mmx, fill1Color);

// 0x6A0950 | ?agiMeshLighterFill2Color@@3VVector3@@A
inline extern_var(0x6A0950, class Vector3, agiMeshLighterFill2Color);

// 0x6A0970 | ?agiMeshLighterFill1Color@@3VVector3@@A
inline extern_var(0x6A0970, class Vector3, agiMeshLighterFill1Color);

// 0x6A0980 | ?fill2Color@@3Tmmx@@A
inline extern_var(0x6A0980, union mmx, fill2Color);

// 0x500FA0 | ?mmxTriple@@YAXPAI0HPAEH@Z
inline void mmxTriple(uint32_t* arg1, uint32_t* arg2, int32_t arg3, uint8_t* arg4, int32_t arg5)
{
    return stub<cdecl_t<void, uint32_t*, uint32_t*, int32_t, uint8_t*, int32_t>>(
        0x500FA0, arg1, arg2, arg3, arg4, arg5);
}

// 0x501760 | ?agiInitCones@@YAXAAVMatrix34@@M@Z
inline void agiInitCones(class Matrix34& arg1, float arg2)
{
    return stub<cdecl_t<void, class Matrix34&, float>>(0x501760, arg1, arg2);
}

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

// agi:cmodelx

#include "hooking.h"

// 0x70EB30 | ?ColorModelARGB@@3VagiColorModelARGB@@A
inline extern_var(0x70EB30, class agiColorModelARGB, ColorModelARGB);

// 0x70EB60 | ?ColorModelRGB565_Rev@@3VagiColorModelRGB565_Rev@@A
inline extern_var(0x70EB60, class agiColorModelRGB565_Rev, ColorModelRGB565_Rev);

// 0x70EB90 | ?ColorModelABGR@@3VagiColorModelABGR@@A
inline extern_var(0x70EB90, class agiColorModelABGR, ColorModelABGR);

// 0x70EBC0 | ?ColorModelRGB555_Rev@@3VagiColorModelRGB555_Rev@@A
inline extern_var(0x70EBC0, class agiColorModelRGB555_Rev, ColorModelRGB555_Rev);

// 0x70EBF0 | ?ColorModelRGB888_Rev@@3VagiColorModelRGB888_Rev@@A
inline extern_var(0x70EBF0, class agiColorModelRGB888_Rev, ColorModelRGB888_Rev);

// 0x70EC20 | ?ColorModelRGBA5551@@3VagiColorModelRGBA5551@@A
inline extern_var(0x70EC20, class agiColorModelRGBA5551, ColorModelRGBA5551);

// 0x70EC50 | ?ColorModelRGBA4444@@3VagiColorModelRGBA4444@@A
inline extern_var(0x70EC50, class agiColorModelRGBA4444, ColorModelRGBA4444);

// 0x70EC80 | ?ColorModelRGB888@@3VagiColorModelRGB888@@A
inline extern_var(0x70EC80, class agiColorModelRGB888, ColorModelRGB888);

// 0x70ECB0 | ?ColorModelRGB565@@3VagiColorModelRGB565@@A
inline extern_var(0x70ECB0, class agiColorModelRGB565, ColorModelRGB565);

// 0x70ECE0 | ?ColorModelRGB555@@3VagiColorModelRGB555@@A
inline extern_var(0x70ECE0, class agiColorModelRGB555, ColorModelRGB555);

class agiColorModelRGB555
{
public:
    // agiColorModelRGB555::`vftable' @ 0x595CE8

    // 0x53E3C0 | ??0agiColorModelRGB555@@QAE@XZ
    inline agiColorModelRGB555()
    {
        stub<member_func_t<void, agiColorModelRGB555>>(0x53E3C0, this);
    }

    // 0x53F750 | ??1agiColorModelRGB555@@UAE@XZ
    virtual inline ~agiColorModelRGB555()
    {
        stub<member_func_t<void, agiColorModelRGB555>>(0x53F750, this);
    }

    // 0x53E400 | ?GetColor@agiColorModelRGB555@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555, struct agiRgba>>(0x53E400, this, arg1);
    }

    // 0x53E440 | ?FindColor@agiColorModelRGB555@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555, struct agiRgba>>(0x53E440, this, arg1);
    }

    // 0x53E480 | ?Filter@agiColorModelRGB555@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53E480, this, arg1, arg2, arg3, arg4);
    }

    // 0x53E530 | ?SetPixel@agiColorModelRGB555@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGB555, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53E530, this, arg1, arg2, arg3, arg4);
    }

    // 0x53E510 | ?GetPixel@agiColorModelRGB555@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53E510, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGB565
{
public:
    // agiColorModelRGB565::`vftable' @ 0x595D00

    // 0x53E5A0 | ??0agiColorModelRGB565@@QAE@XZ
    inline agiColorModelRGB565()
    {
        stub<member_func_t<void, agiColorModelRGB565>>(0x53E5A0, this);
    }

    // 0x53F790 | ??1agiColorModelRGB565@@UAE@XZ
    virtual inline ~agiColorModelRGB565()
    {
        stub<member_func_t<void, agiColorModelRGB565>>(0x53F790, this);
    }

    // 0x53E5E0 | ?GetColor@agiColorModelRGB565@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565, struct agiRgba>>(0x53E5E0, this, arg1);
    }

    // 0x53E620 | ?FindColor@agiColorModelRGB565@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565, struct agiRgba>>(0x53E620, this, arg1);
    }

    // 0x53E660 | ?Filter@agiColorModelRGB565@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53E660, this, arg1, arg2, arg3, arg4);
    }

    // 0x53E710 | ?SetPixel@agiColorModelRGB565@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGB565, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53E710, this, arg1, arg2, arg3, arg4);
    }

    // 0x53E6F0 | ?GetPixel@agiColorModelRGB565@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53E6F0, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGB888
{
public:
    // agiColorModelRGB888::`vftable' @ 0x595D48

    // 0x53EB40 | ??0agiColorModelRGB888@@QAE@XZ
    inline agiColorModelRGB888()
    {
        stub<member_func_t<void, agiColorModelRGB888>>(0x53EB40, this);
    }

    // 0x53F850 | ??1agiColorModelRGB888@@UAE@XZ
    virtual inline ~agiColorModelRGB888()
    {
        stub<member_func_t<void, agiColorModelRGB888>>(0x53F850, this);
    }

    // 0x53EB80 | ?GetColor@agiColorModelRGB888@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888, struct agiRgba>>(0x53EB80, this, arg1);
    }

    // 0x53EBB0 | ?FindColor@agiColorModelRGB888@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888, struct agiRgba>>(0x53EBB0, this, arg1);
    }

    // 0x53EBE0 | ?Filter@agiColorModelRGB888@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53EBE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53EC80 | ?SetPixel@agiColorModelRGB888@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGB888, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53EC80, this, arg1, arg2, arg3, arg4);
    }

    // 0x53EC60 | ?GetPixel@agiColorModelRGB888@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53EC60, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGBA4444
{
public:
    // agiColorModelRGBA4444::`vftable' @ 0x595D90

    // 0x53F0C0 | ??0agiColorModelRGBA4444@@QAE@XZ
    inline agiColorModelRGBA4444()
    {
        stub<member_func_t<void, agiColorModelRGBA4444>>(0x53F0C0, this);
    }

    // 0x53F910 | ??1agiColorModelRGBA4444@@UAE@XZ
    virtual inline ~agiColorModelRGBA4444()
    {
        stub<member_func_t<void, agiColorModelRGBA4444>>(0x53F910, this);
    }

    // 0x53F100 | ?GetColor@agiColorModelRGBA4444@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA4444, struct agiRgba>>(0x53F100, this, arg1);
    }

    // 0x53F150 | ?FindColor@agiColorModelRGBA4444@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA4444, struct agiRgba>>(0x53F150, this, arg1);
    }

    // 0x53F1A0 | ?Filter@agiColorModelRGBA4444@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA4444, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53F1A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F280 | ?SetPixel@agiColorModelRGBA4444@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGBA4444, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53F280, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F260 | ?GetPixel@agiColorModelRGBA4444@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA4444, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53F260, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGBA5551
{
public:
    // agiColorModelRGBA5551::`vftable' @ 0x595D78

    // 0x53EE80 | ??0agiColorModelRGBA5551@@QAE@XZ
    inline agiColorModelRGBA5551()
    {
        stub<member_func_t<void, agiColorModelRGBA5551>>(0x53EE80, this);
    }

    // 0x53F8D0 | ??1agiColorModelRGBA5551@@UAE@XZ
    virtual inline ~agiColorModelRGBA5551()
    {
        stub<member_func_t<void, agiColorModelRGBA5551>>(0x53F8D0, this);
    }

    // 0x53EED0 | ?GetColor@agiColorModelRGBA5551@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA5551, struct agiRgba>>(0x53EED0, this, arg1);
    }

    // 0x53EF20 | ?FindColor@agiColorModelRGBA5551@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA5551, struct agiRgba>>(0x53EF20, this, arg1);
    }

    // 0x53EF70 | ?Filter@agiColorModelRGBA5551@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA5551, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53EF70, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F050 | ?SetPixel@agiColorModelRGBA5551@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGBA5551, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53F050, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F030 | ?GetPixel@agiColorModelRGBA5551@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGBA5551, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53F030, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGB888_Rev
{
public:
    // agiColorModelRGB888_Rev::`vftable' @ 0x595D60

    // 0x53ECE0 | ??0agiColorModelRGB888_Rev@@QAE@XZ
    inline agiColorModelRGB888_Rev()
    {
        stub<member_func_t<void, agiColorModelRGB888_Rev>>(0x53ECE0, this);
    }

    // 0x53F890 | ??1agiColorModelRGB888_Rev@@UAE@XZ
    virtual inline ~agiColorModelRGB888_Rev()
    {
        stub<member_func_t<void, agiColorModelRGB888_Rev>>(0x53F890, this);
    }

    // 0x53ED20 | ?GetColor@agiColorModelRGB888_Rev@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888_Rev, struct agiRgba>>(0x53ED20, this, arg1);
    }

    // 0x53ED50 | ?FindColor@agiColorModelRGB888_Rev@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888_Rev, struct agiRgba>>(0x53ED50, this, arg1);
    }

    // 0x53ED80 | ?Filter@agiColorModelRGB888_Rev@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888_Rev, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53ED80, this, arg1, arg2, arg3, arg4);
    }

    // 0x53EE20 | ?SetPixel@agiColorModelRGB888_Rev@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGB888_Rev, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53EE20, this, arg1, arg2, arg3, arg4);
    }

    // 0x53EE00 | ?GetPixel@agiColorModelRGB888_Rev@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB888_Rev, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53EE00, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGB555_Rev
{
public:
    // agiColorModelRGB555_Rev::`vftable' @ 0x595D18

    // 0x53E780 | ??0agiColorModelRGB555_Rev@@QAE@XZ
    inline agiColorModelRGB555_Rev()
    {
        stub<member_func_t<void, agiColorModelRGB555_Rev>>(0x53E780, this);
    }

    // 0x53F7D0 | ??1agiColorModelRGB555_Rev@@UAE@XZ
    virtual inline ~agiColorModelRGB555_Rev()
    {
        stub<member_func_t<void, agiColorModelRGB555_Rev>>(0x53F7D0, this);
    }

    // 0x53E7C0 | ?GetColor@agiColorModelRGB555_Rev@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555_Rev, struct agiRgba>>(0x53E7C0, this, arg1);
    }

    // 0x53E800 | ?FindColor@agiColorModelRGB555_Rev@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555_Rev, struct agiRgba>>(0x53E800, this, arg1);
    }

    // 0x53E840 | ?Filter@agiColorModelRGB555_Rev@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555_Rev, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53E840, this, arg1, arg2, arg3, arg4);
    }

    // 0x53E8F0 | ?SetPixel@agiColorModelRGB555_Rev@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGB555_Rev, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53E8F0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53E8D0 | ?GetPixel@agiColorModelRGB555_Rev@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB555_Rev, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53E8D0, this, arg1, arg2, arg3);
    }
};

class agiColorModelABGR
{
public:
    // agiColorModelABGR::`vftable' @ 0x595DC0

    // 0x53F4E0 | ??0agiColorModelABGR@@QAE@XZ
    inline agiColorModelABGR()
    {
        stub<member_func_t<void, agiColorModelABGR>>(0x53F4E0, this);
    }

    // 0x53F990 | ??1agiColorModelABGR@@UAE@XZ
    virtual inline ~agiColorModelABGR()
    {
        stub<member_func_t<void, agiColorModelABGR>>(0x53F990, this);
    }

    // 0x53F520 | ?GetColor@agiColorModelABGR@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelABGR, struct agiRgba>>(0x53F520, this, arg1);
    }

    // 0x53F560 | ?FindColor@agiColorModelABGR@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelABGR, struct agiRgba>>(0x53F560, this, arg1);
    }

    // 0x53F5A0 | ?Filter@agiColorModelABGR@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelABGR, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53F5A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F660 | ?SetPixel@agiColorModelABGR@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelABGR, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53F660, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F640 | ?GetPixel@agiColorModelABGR@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelABGR, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53F640, this, arg1, arg2, arg3);
    }
};

class agiColorModelRGB565_Rev
{
public:
    // agiColorModelRGB565_Rev::`vftable' @ 0x595D30

    // 0x53E960 | ??0agiColorModelRGB565_Rev@@QAE@XZ
    inline agiColorModelRGB565_Rev()
    {
        stub<member_func_t<void, agiColorModelRGB565_Rev>>(0x53E960, this);
    }

    // 0x53F810 | ??1agiColorModelRGB565_Rev@@UAE@XZ
    virtual inline ~agiColorModelRGB565_Rev()
    {
        stub<member_func_t<void, agiColorModelRGB565_Rev>>(0x53F810, this);
    }

    // 0x53E9A0 | ?GetColor@agiColorModelRGB565_Rev@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565_Rev, struct agiRgba>>(0x53E9A0, this, arg1);
    }

    // 0x53E9E0 | ?FindColor@agiColorModelRGB565_Rev@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565_Rev, struct agiRgba>>(0x53E9E0, this, arg1);
    }

    // 0x53EA20 | ?Filter@agiColorModelRGB565_Rev@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565_Rev, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53EA20, this, arg1, arg2, arg3, arg4);
    }

    // 0x53EAD0 | ?SetPixel@agiColorModelRGB565_Rev@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelRGB565_Rev, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53EAD0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53EAB0 | ?GetPixel@agiColorModelRGB565_Rev@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelRGB565_Rev, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53EAB0, this, arg1, arg2, arg3);
    }
};

class agiColorModelARGB
{
public:
    // agiColorModelARGB::`vftable' @ 0x595DA8

    // 0x53F2F0 | ??0agiColorModelARGB@@QAE@XZ
    inline agiColorModelARGB()
    {
        stub<member_func_t<void, agiColorModelARGB>>(0x53F2F0, this);
    }

    // 0x53F950 | ??1agiColorModelARGB@@UAE@XZ
    virtual inline ~agiColorModelARGB()
    {
        stub<member_func_t<void, agiColorModelARGB>>(0x53F950, this);
    }

    // 0x53F330 | ?GetColor@agiColorModelARGB@@UAEIUagiRgba@@@Z
    virtual inline uint32_t GetColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelARGB, struct agiRgba>>(0x53F330, this, arg1);
    }

    // 0x53F370 | ?FindColor@agiColorModelARGB@@UAEIUagiRgba@@@Z
    virtual inline uint32_t FindColor(struct agiRgba arg1)
    {
        return stub<member_func_t<uint32_t, agiColorModelARGB, struct agiRgba>>(0x53F370, this, arg1);
    }

    // 0x53F3B0 | ?Filter@agiColorModelARGB@@UAEIIIII@Z
    virtual inline uint32_t Filter(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<uint32_t, agiColorModelARGB, uint32_t, uint32_t, uint32_t, uint32_t>>(
            0x53F3B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F480 | ?SetPixel@agiColorModelARGB@@UAEXPAVagiSurfaceDesc@@HHI@Z
    virtual inline void SetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
    {
        return stub<member_func_t<void, agiColorModelARGB, class agiSurfaceDesc*, int32_t, int32_t, uint32_t>>(
            0x53F480, this, arg1, arg2, arg3, arg4);
    }

    // 0x53F460 | ?GetPixel@agiColorModelARGB@@UAEIPAVagiSurfaceDesc@@HH@Z
    virtual inline uint32_t GetPixel(class agiSurfaceDesc* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<uint32_t, agiColorModelARGB, class agiSurfaceDesc*, int32_t, int32_t>>(
            0x53F460, this, arg1, arg2, arg3);
    }
};

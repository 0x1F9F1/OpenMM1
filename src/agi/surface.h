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
    agi:surface

    0x53C760 | public: static class agiSurfaceDesc * __cdecl agiSurfaceDesc::Init(int,int,class agiSurfaceDesc &) | ?Init@agiSurfaceDesc@@SAPAV1@HHAAV1@@Z
    0x53C7E0 | public: static class agiSurfaceDesc * __cdecl agiSurfaceDesc::Load(char *,char *,int,int,int,int) | ?Load@agiSurfaceDesc@@SAPAV1@PAD0HHHH@Z
    0x53CE30 | public: void __thiscall agiSurfaceDesc::Reload(char *,char *,int,int,class Stream *,int,int) | ?Reload@agiSurfaceDesc@@QAEXPAD0HHPAVStream@@HH@Z
    0x53D080 | public: void __thiscall agiSurfaceDesc::Unload(void) | ?Unload@agiSurfaceDesc@@QAEXXZ
    0x53D0A0 | public: void __thiscall agiSurfaceDesc::CopyFrom(class agiSurfaceDesc *,int) | ?CopyFrom@agiSurfaceDesc@@QAEXPAV1@H@Z
    0x70A67C | int AnnotateTextures | ?AnnotateTextures@@3HA
    0x53CB20 | void __cdecl RescaleJpeg(unsigned int,unsigned int,unsigned char *,struct jpeg_decompress_struct &) | ?RescaleJpeg@@YAXIIPAEAAUjpeg_decompress_struct@@@Z
    0x53D430 | void __cdecl copyrow565_to_555(void *,void *,unsigned int,unsigned int) | ?copyrow565_to_555@@YAXPAX0II@Z
    0x53D480 | void __cdecl copyrow565_to_5551(void *,void *,unsigned int,unsigned int) | ?copyrow565_to_5551@@YAXPAX0II@Z
    0x53D4E0 | void __cdecl copyrow565_to_888(void *,void *,unsigned int,unsigned int) | ?copyrow565_to_888@@YAXPAX0II@Z
    0x53D560 | void __cdecl copyrow565_to_888rev(void *,void *,unsigned int,unsigned int) | ?copyrow565_to_888rev@@YAXPAX0II@Z
    0x53D5E0 | void __cdecl copyrow4444_to_8888(void *,void *,unsigned int,unsigned int) | ?copyrow4444_to_8888@@YAXPAX0II@Z
    0x53D670 | void __cdecl copyrow4444_to_8888rev(void *,void *,unsigned int,unsigned int) | ?copyrow4444_to_8888rev@@YAXPAX0II@Z
    0x53D700 | void __cdecl copyrow4444_to_555(void *,void *,unsigned int,unsigned int) | ?copyrow4444_to_555@@YAXPAX0II@Z
    0x53D780 | void __cdecl copyrow4444_to_565(void *,void *,unsigned int,unsigned int) | ?copyrow4444_to_565@@YAXPAX0II@Z
    0x53D800 | void __cdecl copyrow4444_to_5551(void *,void *,unsigned int,unsigned int) | ?copyrow4444_to_5551@@YAXPAX0II@Z
*/

// 0x70A67C | ?AnnotateTextures@@3HA
inline extern_var(0x70A67C, int32_t, AnnotateTextures);

// 0x53CB20 | ?RescaleJpeg@@YAXIIPAEAAUjpeg_decompress_struct@@@Z
inline void RescaleJpeg(uint32_t arg1, uint32_t arg2, uint8_t* arg3, struct jpeg_decompress_struct& arg4)
{
    return stub<cdecl_t<void, uint32_t, uint32_t, uint8_t*, struct jpeg_decompress_struct&>>(
        0x53CB20, arg1, arg2, arg3, arg4);
}

// 0x53D430 | ?copyrow565_to_555@@YAXPAX0II@Z
inline void copyrow565_to_555(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D430, arg1, arg2, arg3, arg4);
}

// 0x53D480 | ?copyrow565_to_5551@@YAXPAX0II@Z
inline void copyrow565_to_5551(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D480, arg1, arg2, arg3, arg4);
}

// 0x53D4E0 | ?copyrow565_to_888@@YAXPAX0II@Z
inline void copyrow565_to_888(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D4E0, arg1, arg2, arg3, arg4);
}

// 0x53D560 | ?copyrow565_to_888rev@@YAXPAX0II@Z
inline void copyrow565_to_888rev(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D560, arg1, arg2, arg3, arg4);
}

// 0x53D5E0 | ?copyrow4444_to_8888@@YAXPAX0II@Z
inline void copyrow4444_to_8888(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D5E0, arg1, arg2, arg3, arg4);
}

// 0x53D670 | ?copyrow4444_to_8888rev@@YAXPAX0II@Z
inline void copyrow4444_to_8888rev(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D670, arg1, arg2, arg3, arg4);
}

// 0x53D700 | ?copyrow4444_to_555@@YAXPAX0II@Z
inline void copyrow4444_to_555(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D700, arg1, arg2, arg3, arg4);
}

// 0x53D780 | ?copyrow4444_to_565@@YAXPAX0II@Z
inline void copyrow4444_to_565(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D780, arg1, arg2, arg3, arg4);
}

// 0x53D800 | ?copyrow4444_to_5551@@YAXPAX0II@Z
inline void copyrow4444_to_5551(void* arg1, void* arg2, uint32_t arg3, uint32_t arg4)
{
    return stub<cdecl_t<void, void*, void*, uint32_t, uint32_t>>(0x53D800, arg1, arg2, arg3, arg4);
}

struct agiColorKey // DDCOLORKEY
{
    uint32_t dwColorSpaceLowValue;
    uint32_t dwColorSpaceHighValue;
};

struct agiDDSCAPS2 // DDSCAPS2
{
    uint32_t dwCaps;
    uint32_t dwCaps2;
    uint32_t dwCaps3;
    uint32_t dwCaps4;
};

struct agiPixelFormat // DDPIXELFORMAT
{
    uint32_t dwSize;
    uint32_t dwFlags;
    uint32_t dwFourCC;
    union
    {
        uint32_t dwRGBBitCount;
        uint32_t dwYUVBitCount;
        uint32_t dwZBufferBitDepth;
        uint32_t dwAlphaBitDepth;
        uint32_t dwLuminanceBitCount;
        uint32_t dwBumpBitCount;
    };
    union
    {
        uint32_t dwRBitMask;
        uint32_t dwYBitMask;
        uint32_t dwStencilBitDepth;
        uint32_t dwLuminanceBitMask;
        uint32_t dwBumpDuBitMask;
    };
    union
    {
        uint32_t dwGBitMask;
        uint32_t dwUBitMask;
        uint32_t dwZBitMask;
        uint32_t dwBumpDvBitMask;
    };
    union
    {
        uint32_t dwBBitMask;
        uint32_t dwVBitMask;
        uint32_t dwStencilBitMask;
        uint32_t dwBumpLuminanceBitMask;
    };
    union
    {
        uint32_t dwRGBAlphaBitMask;
        uint32_t dwYUVAlphaBitMask;
        uint32_t dwLuminanceAlphaBitMask;
        uint32_t dwRGBZBitMask;
        uint32_t dwYUVZBitMask;
    };

    agiPixelFormat();
};

class agiSurfaceDesc // DDSURFACEDESC2
{
public:
    uint32_t dwSize;
    uint32_t dwFlags;
    uint32_t dwHeight;
    uint32_t dwWidth;
    union
    {
        int32_t lPitch;
        uint32_t dwLinearSize;
    };
    uint32_t dwBackBufferCount;
    union
    {
        uint32_t dwMipMapCount;
        uint32_t dwRefreshRate;
        uint32_t dwSrcVBHandle;
    };
    uint32_t dwAlphaBitDepth;
    uint32_t dwReserved;
    void* lpSurface;
    union
    {
        agiColorKey ddckCKDestOverlay;
        uint32_t dwEmptyFaceColor;
    };
    agiColorKey ddckCKDestBlt;
    agiColorKey ddckCKSrcOverlay;
    agiColorKey ddckCKSrcBlt;
    union
    {
        agiPixelFormat ddpfPixelFormat;
        uint32_t dwFVF;
    };
    agiDDSCAPS2 ddsCaps;
    uint32_t dwTextureStage;

    agiSurfaceDesc();

    // 0x53C760 | ?Init@agiSurfaceDesc@@SAPAV1@HHAAV1@@Z
    static class agiSurfaceDesc* Init(int32_t width, int32_t height, class agiSurfaceDesc& desc);

    // 0x53C7E0 | ?Load@agiSurfaceDesc@@SAPAV1@PAD0HHHH@Z
    static inline class agiSurfaceDesc* Load(
        char* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
    {
        return stub<cdecl_t<class agiSurfaceDesc*, char*, char*, int32_t, int32_t, int32_t, int32_t>>(
            0x53C7E0, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x53CE30 | ?Reload@agiSurfaceDesc@@QAEXPAD0HHPAVStream@@HH@Z
    inline void Reload(
        const char* arg1, const char* arg2, int32_t arg3, int32_t arg4, class Stream* arg5, int32_t arg6, int32_t arg7)
    {
        return stub<
            member_func_t<void, agiSurfaceDesc, const char*, const char*, int32_t, int32_t, class Stream*, int32_t, int32_t>>(
            0x53CE30, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x53D080 | ?Unload@agiSurfaceDesc@@QAEXXZ
    void Unload();

    // 0x53D0A0 | ?CopyFrom@agiSurfaceDesc@@QAEXPAV1@H@Z
    inline void CopyFrom(class agiSurfaceDesc* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, agiSurfaceDesc, class agiSurfaceDesc*, int32_t>>(0x53D0A0, this, arg1, arg2);
    }
};

check_size(agiSurfaceDesc, 0x7C);

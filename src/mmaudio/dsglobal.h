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
    mmaudio:dsglobal

    0x4E1D10 | public: __thiscall DSGlobal::DSGlobal(void) | ??0DSGlobal@@QAE@XZ
    0x4E1DE0 | public: __thiscall DSGlobal::~DSGlobal(void) | ??1DSGlobal@@QAE@XZ
    0x4E1EC0 | public: void __thiscall DSGlobal::DeallocateUIADF(void) | ?DeallocateUIADF@DSGlobal@@QAEXXZ
    0x4E1F20 | public: void __thiscall DSGlobal::DeallocateCityADF(void) | ?DeallocateCityADF@DSGlobal@@QAEXXZ
    0x4E1F50 | public: void __thiscall DSGlobal::DeallocateADFRecord(int) | ?DeallocateADFRecord@DSGlobal@@QAEXH@Z
    0x4E1FE0 | public: void __thiscall DSGlobal::DeInit(short,short) | ?DeInit@DSGlobal@@QAEXFF@Z
    0x4E2130 | public: int __thiscall DSGlobal::Init(unsigned long,unsigned char,unsigned int *,char *,short,short) | ?Init@DSGlobal@@QAEHKEPAIPADFF@Z
    0x4E2370 | public: int __thiscall DSGlobal::Init3DListener(float,float,float,float,float) | ?Init3DListener@DSGlobal@@QAEHMMMMM@Z
    0x4E2400 | void __cdecl UpperCase(char *) | ?UpperCase@@YAXPAD@Z
    0x4E2450 | int __cdecl IsDSDeviceInList(struct _GUID *) | ?IsDSDeviceInList@@YAHPAU_GUID@@@Z
    0x4E24B0 | int __stdcall DSEnumProc(struct _GUID *,char *,char *,void *) | ?DSEnumProc@@YGHPAU_GUID@@PAD1PAX@Z
    0x4E2650 | public: void __thiscall DSGlobal::SetDeviceRating(struct tag_dsdevdesc *) | ?SetDeviceRating@DSGlobal@@QAEXPAUtag_dsdevdesc@@@Z
    0x4E27C0 | public: int __thiscall DSGlobal::EnumDSDevices(void) | ?EnumDSDevices@DSGlobal@@QAEHXZ
    0x4E27E0 | public: int __thiscall DSGlobal::InitPrimarySoundBuffer(unsigned long,unsigned char,char *) | ?InitPrimarySoundBuffer@DSGlobal@@QAEHKEPAD@Z
    0x4E29F0 | public: void __thiscall DSGlobal::ClearDSDeviceList(void) | ?ClearDSDeviceList@DSGlobal@@QAEXXZ
    0x4E2A30 | public: int __thiscall DSGlobal::LoadUIADF(char *) | ?LoadUIADF@DSGlobal@@QAEHPAD@Z
    0x4E2BD0 | public: int __thiscall DSGlobal::LoadCityADF(char *,int,unsigned long) | ?LoadCityADF@DSGlobal@@QAEHPADHK@Z
    0x4E2DE0 | public: int __thiscall DSGlobal::InitCityADF(char *,int,unsigned long) | ?InitCityADF@DSGlobal@@QAEHPADHK@Z
    0x4E2EA0 | public: int __thiscall DSGlobal::InitUIADF(char *,int,unsigned long) | ?InitUIADF@DSGlobal@@QAEHPADHK@Z
    0x4E2F60 | public: void __thiscall DSGlobal::ConvertTo8Bit(int) | ?ConvertTo8Bit@DSGlobal@@QAEXH@Z
    0x4E30F0 | int __cdecl FormatCodeToWFX(unsigned long,struct tWAVEFORMATEX *) | ?FormatCodeToWFX@@YAHKPAUtWAVEFORMATEX@@@Z
    0x4E31A0 | public: void __thiscall DSGlobal::SetPrimaryBufferFormat(unsigned long,unsigned char) | ?SetPrimaryBufferFormat@DSGlobal@@QAEXKE@Z
    0x4E3290 | public: void __thiscall DSGlobal::ScanAvailableDSFormats(void) | ?ScanAvailableDSFormats@DSGlobal@@QAEXXZ
    0x4E3350 | public: char * __thiscall DSGlobal::TranslateDSError(long) | ?TranslateDSError@DSGlobal@@QAEPADJ@Z
    0x4E3500 | public: unsigned char __thiscall DSGlobal::CheckCDFile(char *) | ?CheckCDFile@DSGlobal@@QAEEPAD@Z
    0x4E35B0 | public: void __thiscall DSGlobal::SetBitDepth(int) | ?SetBitDepth@DSGlobal@@QAEXH@Z
    0x4E35E0 | public: char * * __thiscall DSGlobal::GetDeviceNames(void) | ?GetDeviceNames@DSGlobal@@QAEPAPADXZ
    0x4E3610 | public: unsigned long __thiscall DSGlobal::GetNum3DHallBufs(void) | ?GetNum3DHallBufs@DSGlobal@@QAEKXZ
    0x4E3640 | public: static unsigned int const __cdecl DSGlobal::GetStereoOnMask(void) | ?GetStereoOnMask@DSGlobal@@SA?BIXZ
    0x4E3650 | public: static unsigned int const __cdecl DSGlobal::GetHiResMask(void) | ?GetHiResMask@DSGlobal@@SA?BIXZ
    0x4E3660 | public: static unsigned int const __cdecl DSGlobal::GetHiSampleSizeMask(void) | ?GetHiSampleSizeMask@DSGlobal@@SA?BIXZ
    0x4E3670 | public: static unsigned int const __cdecl DSGlobal::GetEchoOnMask(void) | ?GetEchoOnMask@DSGlobal@@SA?BIXZ
    0x4E3680 | public: static unsigned int const __cdecl DSGlobal::GetDSound3DMask(void) | ?GetDSound3DMask@DSGlobal@@SA?BIXZ
    0x4E3690 | public: static unsigned int const __cdecl DSGlobal::GetSoundFXOnMask(void) | ?GetSoundFXOnMask@DSGlobal@@SA?BIXZ
    0x4E36A0 | public: static unsigned int const __cdecl DSGlobal::GetCommentaryOnMask(void) | ?GetCommentaryOnMask@DSGlobal@@SA?BIXZ
    0x4E36B0 | public: static unsigned int const __cdecl DSGlobal::GetCDMusicOnMask(void) | ?GetCDMusicOnMask@DSGlobal@@SA?BIXZ
    0x4E36C0 | public: static unsigned int const __cdecl DSGlobal::GetUsingEAXMask(void) | ?GetUsingEAXMask@DSGlobal@@SA?BIXZ
    0x4E36D0 | public: unsigned int __thiscall DSGlobal::EAXEnabled(void) | ?EAXEnabled@DSGlobal@@QAEIXZ
    0x4E36E0 | public: unsigned int __thiscall DSGlobal::IsAlwaysEAX(void) | ?IsAlwaysEAX@DSGlobal@@QAEIXZ
    0x4E36F0 | public: unsigned int __thiscall DSGlobal::AlwaysEAX(unsigned int) | ?AlwaysEAX@DSGlobal@@QAEII@Z
    0x4E3720 | public: unsigned int __thiscall DSGlobal::DSound3DEnabled(void) | ?DSound3DEnabled@DSGlobal@@QAEIXZ
    0x4E3730 | public: void __thiscall DSGlobal::DisableEAXFlag(void) | ?DisableEAXFlag@DSGlobal@@QAEXXZ
    0x594990 | private: static unsigned int const DSGlobal::s_iStereoOnMask | ?s_iStereoOnMask@DSGlobal@@0IB
    0x594994 | private: static unsigned int const DSGlobal::s_iHiResMask | ?s_iHiResMask@DSGlobal@@0IB
    0x594998 | private: static unsigned int const DSGlobal::s_iHiSampleSizeMask | ?s_iHiSampleSizeMask@DSGlobal@@0IB
    0x59499C | private: static unsigned int const DSGlobal::s_iEchoOnMask | ?s_iEchoOnMask@DSGlobal@@0IB
    0x5949A0 | private: static unsigned int const DSGlobal::s_iDSound3DMask | ?s_iDSound3DMask@DSGlobal@@0IB
    0x5949A4 | private: static unsigned int const DSGlobal::s_iSoundFXOnMask | ?s_iSoundFXOnMask@DSGlobal@@0IB
    0x5949A8 | private: static unsigned int const DSGlobal::s_iCDMusicOnMask | ?s_iCDMusicOnMask@DSGlobal@@0IB
    0x5949AC | private: static unsigned int const DSGlobal::s_iUsingEAXMask | ?s_iUsingEAXMask@DSGlobal@@0IB
    0x5949B0 | private: static unsigned int const DSGlobal::s_iAlwaysEAXMask | ?s_iAlwaysEAXMask@DSGlobal@@0IB
    0x5949B4 | private: static unsigned int const DSGlobal::s_iCommentaryOnMask | ?s_iCommentaryOnMask@DSGlobal@@0IB
    0x5949B8 | const CDMan::`vftable' | ??_7CDMan@@6B@
    0x5B5C70 | struct tag_fd * aOutputFormats | ?aOutputFormats@@3PAUtag_fd@@A
    0x67B5FC | class DSGlobal * DSGlobalPtr | ?DSGlobalPtr@@3PAVDSGlobal@@A
    0x4E27B0 | void __cdecl Debugf(char const *,...) | ?Debugf@@YAXPBDZZ
*/

// 0x4E2400 | ?UpperCase@@YAXPAD@Z
inline void UpperCase(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x4E2400, arg1);
}

// 0x4E2450 | ?IsDSDeviceInList@@YAHPAU_GUID@@@Z
inline int32_t IsDSDeviceInList(struct _GUID* arg1)
{
    return stub<cdecl_t<int32_t, struct _GUID*>>(0x4E2450, arg1);
}

// 0x4E24B0 | ?DSEnumProc@@YGHPAU_GUID@@PAD1PAX@Z
inline int32_t __stdcall DSEnumProc(struct _GUID* arg1, char* arg2, char* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID*, char*, char*, void*>>(0x4E24B0, arg1, arg2, arg3, arg4);
}

// 0x4E30F0 | ?FormatCodeToWFX@@YAHKPAUtWAVEFORMATEX@@@Z
inline int32_t FormatCodeToWFX(uint32_t arg1, struct tWAVEFORMATEX* arg2)
{
    return stub<cdecl_t<int32_t, uint32_t, struct tWAVEFORMATEX*>>(0x4E30F0, arg1, arg2);
}

// 0x5B5C70 | ?aOutputFormats@@3PAUtag_fd@@A
inline extern_var(0x5B5C70, struct tag_fd*, aOutputFormats);

// 0x67B5FC | ?DSGlobalPtr@@3PAVDSGlobal@@A
inline extern_var(0x67B5FC, class DSGlobal*, DSGlobalPtr);

// 0x4E27B0 | ?Debugf@@YAXPBDZZ
// Skipped (Variable Arguments)

class DSGlobal
{
public:
    // 0x4E1D10 | ??0DSGlobal@@QAE@XZ
    inline DSGlobal()
    {
        // stub<member_func_t<void, DSGlobal>>(0x4E1D10, this);

        unimplemented();
    }

    // 0x4E1DE0 | ??1DSGlobal@@QAE@XZ
    inline ~DSGlobal()
    {
        stub<member_func_t<void, DSGlobal>>(0x4E1DE0, this);
    }

    // 0x4E1EC0 | ?DeallocateUIADF@DSGlobal@@QAEXXZ
    inline void DeallocateUIADF()
    {
        return stub<member_func_t<void, DSGlobal>>(0x4E1EC0, this);
    }

    // 0x4E1F20 | ?DeallocateCityADF@DSGlobal@@QAEXXZ
    inline void DeallocateCityADF()
    {
        return stub<member_func_t<void, DSGlobal>>(0x4E1F20, this);
    }

    // 0x4E1F50 | ?DeallocateADFRecord@DSGlobal@@QAEXH@Z
    inline void DeallocateADFRecord(int32_t arg1)
    {
        return stub<member_func_t<void, DSGlobal, int32_t>>(0x4E1F50, this, arg1);
    }

    // 0x4E1FE0 | ?DeInit@DSGlobal@@QAEXFF@Z
    inline void DeInit(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, DSGlobal, int16_t, int16_t>>(0x4E1FE0, this, arg1, arg2);
    }

    // 0x4E2130 | ?Init@DSGlobal@@QAEHKEPAIPADFF@Z
    inline int32_t Init(uint32_t arg1, uint8_t arg2, uint32_t* arg3, char* arg4, int16_t arg5, int16_t arg6)
    {
        return stub<member_func_t<int32_t, DSGlobal, uint32_t, uint8_t, uint32_t*, char*, int16_t, int16_t>>(
            0x4E2130, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4E2370 | ?Init3DListener@DSGlobal@@QAEHMMMMM@Z
    inline int32_t Init3DListener(float arg1, float arg2, float arg3, float arg4, float arg5)
    {
        return stub<member_func_t<int32_t, DSGlobal, float, float, float, float, float>>(
            0x4E2370, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4E2650 | ?SetDeviceRating@DSGlobal@@QAEXPAUtag_dsdevdesc@@@Z
    inline void SetDeviceRating(struct tag_dsdevdesc* arg1)
    {
        return stub<member_func_t<void, DSGlobal, struct tag_dsdevdesc*>>(0x4E2650, this, arg1);
    }

    // 0x4E27C0 | ?EnumDSDevices@DSGlobal@@QAEHXZ
    inline int32_t EnumDSDevices()
    {
        return stub<member_func_t<int32_t, DSGlobal>>(0x4E27C0, this);
    }

    // 0x4E27E0 | ?InitPrimarySoundBuffer@DSGlobal@@QAEHKEPAD@Z
    inline int32_t InitPrimarySoundBuffer(uint32_t arg1, uint8_t arg2, char* arg3)
    {
        return stub<member_func_t<int32_t, DSGlobal, uint32_t, uint8_t, char*>>(0x4E27E0, this, arg1, arg2, arg3);
    }

    // 0x4E29F0 | ?ClearDSDeviceList@DSGlobal@@QAEXXZ
    inline void ClearDSDeviceList()
    {
        return stub<member_func_t<void, DSGlobal>>(0x4E29F0, this);
    }

    // 0x4E2A30 | ?LoadUIADF@DSGlobal@@QAEHPAD@Z
    inline int32_t LoadUIADF(char* arg1)
    {
        return stub<member_func_t<int32_t, DSGlobal, char*>>(0x4E2A30, this, arg1);
    }

    // 0x4E2BD0 | ?LoadCityADF@DSGlobal@@QAEHPADHK@Z
    inline int32_t LoadCityADF(char* arg1, int32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<int32_t, DSGlobal, char*, int32_t, uint32_t>>(0x4E2BD0, this, arg1, arg2, arg3);
    }

    // 0x4E2DE0 | ?InitCityADF@DSGlobal@@QAEHPADHK@Z
    inline int32_t InitCityADF(char* arg1, int32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<int32_t, DSGlobal, char*, int32_t, uint32_t>>(0x4E2DE0, this, arg1, arg2, arg3);
    }

    // 0x4E2EA0 | ?InitUIADF@DSGlobal@@QAEHPADHK@Z
    inline int32_t InitUIADF(char* arg1, int32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<int32_t, DSGlobal, char*, int32_t, uint32_t>>(0x4E2EA0, this, arg1, arg2, arg3);
    }

    // 0x4E2F60 | ?ConvertTo8Bit@DSGlobal@@QAEXH@Z
    inline void ConvertTo8Bit(int32_t arg1)
    {
        return stub<member_func_t<void, DSGlobal, int32_t>>(0x4E2F60, this, arg1);
    }

    // 0x4E31A0 | ?SetPrimaryBufferFormat@DSGlobal@@QAEXKE@Z
    inline void SetPrimaryBufferFormat(uint32_t arg1, uint8_t arg2)
    {
        return stub<member_func_t<void, DSGlobal, uint32_t, uint8_t>>(0x4E31A0, this, arg1, arg2);
    }

    // 0x4E3290 | ?ScanAvailableDSFormats@DSGlobal@@QAEXXZ
    inline void ScanAvailableDSFormats()
    {
        return stub<member_func_t<void, DSGlobal>>(0x4E3290, this);
    }

    // 0x4E3350 | ?TranslateDSError@DSGlobal@@QAEPADJ@Z
    inline char* TranslateDSError(int32_t arg1)
    {
        return stub<member_func_t<char*, DSGlobal, int32_t>>(0x4E3350, this, arg1);
    }

    // 0x4E3500 | ?CheckCDFile@DSGlobal@@QAEEPAD@Z
    inline uint8_t CheckCDFile(char* arg1)
    {
        return stub<member_func_t<uint8_t, DSGlobal, char*>>(0x4E3500, this, arg1);
    }

    // 0x4E35B0 | ?SetBitDepth@DSGlobal@@QAEXH@Z
    inline void SetBitDepth(int32_t arg1)
    {
        return stub<member_func_t<void, DSGlobal, int32_t>>(0x4E35B0, this, arg1);
    }

    // 0x4E35E0 | ?GetDeviceNames@DSGlobal@@QAEPAPADXZ
    inline char** GetDeviceNames()
    {
        return stub<member_func_t<char**, DSGlobal>>(0x4E35E0, this);
    }

    // 0x4E3610 | ?GetNum3DHallBufs@DSGlobal@@QAEKXZ
    inline uint32_t GetNum3DHallBufs()
    {
        return stub<member_func_t<uint32_t, DSGlobal>>(0x4E3610, this);
    }

    // 0x4E3640 | ?GetStereoOnMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetStereoOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E3640);
    }

    // 0x4E3650 | ?GetHiResMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetHiResMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E3650);
    }

    // 0x4E3660 | ?GetHiSampleSizeMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetHiSampleSizeMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E3660);
    }

    // 0x4E3670 | ?GetEchoOnMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetEchoOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E3670);
    }

    // 0x4E3680 | ?GetDSound3DMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetDSound3DMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E3680);
    }

    // 0x4E3690 | ?GetSoundFXOnMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetSoundFXOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E3690);
    }

    // 0x4E36A0 | ?GetCommentaryOnMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetCommentaryOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E36A0);
    }

    // 0x4E36B0 | ?GetCDMusicOnMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetCDMusicOnMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E36B0);
    }

    // 0x4E36C0 | ?GetUsingEAXMask@DSGlobal@@SA?BIXZ
    static inline uint32_t const GetUsingEAXMask()
    {
        return stub<cdecl_t<uint32_t const>>(0x4E36C0);
    }

    // 0x4E36D0 | ?EAXEnabled@DSGlobal@@QAEIXZ
    inline uint32_t EAXEnabled()
    {
        return stub<member_func_t<uint32_t, DSGlobal>>(0x4E36D0, this);
    }

    // 0x4E36E0 | ?IsAlwaysEAX@DSGlobal@@QAEIXZ
    inline uint32_t IsAlwaysEAX()
    {
        return stub<member_func_t<uint32_t, DSGlobal>>(0x4E36E0, this);
    }

    // 0x4E36F0 | ?AlwaysEAX@DSGlobal@@QAEII@Z
    inline uint32_t AlwaysEAX(uint32_t arg1)
    {
        return stub<member_func_t<uint32_t, DSGlobal, uint32_t>>(0x4E36F0, this, arg1);
    }

    // 0x4E3720 | ?DSound3DEnabled@DSGlobal@@QAEIXZ
    inline uint32_t DSound3DEnabled()
    {
        return stub<member_func_t<uint32_t, DSGlobal>>(0x4E3720, this);
    }

    // 0x4E3730 | ?DisableEAXFlag@DSGlobal@@QAEXXZ
    inline void DisableEAXFlag()
    {
        return stub<member_func_t<void, DSGlobal>>(0x4E3730, this);
    }

    // 0x594990 | ?s_iStereoOnMask@DSGlobal@@0IB
    static inline extern_var(0x594990, uint32_t const, s_iStereoOnMask);

    // 0x594994 | ?s_iHiResMask@DSGlobal@@0IB
    static inline extern_var(0x594994, uint32_t const, s_iHiResMask);

    // 0x594998 | ?s_iHiSampleSizeMask@DSGlobal@@0IB
    static inline extern_var(0x594998, uint32_t const, s_iHiSampleSizeMask);

    // 0x59499C | ?s_iEchoOnMask@DSGlobal@@0IB
    static inline extern_var(0x59499C, uint32_t const, s_iEchoOnMask);

    // 0x5949A0 | ?s_iDSound3DMask@DSGlobal@@0IB
    static inline extern_var(0x5949A0, uint32_t const, s_iDSound3DMask);

    // 0x5949A4 | ?s_iSoundFXOnMask@DSGlobal@@0IB
    static inline extern_var(0x5949A4, uint32_t const, s_iSoundFXOnMask);

    // 0x5949A8 | ?s_iCDMusicOnMask@DSGlobal@@0IB
    static inline extern_var(0x5949A8, uint32_t const, s_iCDMusicOnMask);

    // 0x5949AC | ?s_iUsingEAXMask@DSGlobal@@0IB
    static inline extern_var(0x5949AC, uint32_t const, s_iUsingEAXMask);

    // 0x5949B0 | ?s_iAlwaysEAXMask@DSGlobal@@0IB
    static inline extern_var(0x5949B0, uint32_t const, s_iAlwaysEAXMask);

    // 0x5949B4 | ?s_iCommentaryOnMask@DSGlobal@@0IB
    static inline extern_var(0x5949B4, uint32_t const, s_iCommentaryOnMask);
};

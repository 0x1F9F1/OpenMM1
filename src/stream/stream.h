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

// stream:stream

#include "hooking.h"

class Stream : Base
{
public:
    // Stream::`vftable' @ 0x595E18

    // 0x540430 | ??0Stream@@QAE@PAXHPAVFileSystem@@@Z
    inline Stream(void* arg1, int32_t arg2, class FileSystem* arg3)
    {
        stub<member_func_t<void, Stream, void*, int32_t, class FileSystem*>>(0x540430, this, arg1, arg2, arg3);
    }

    // 0x540540 | ?Read@Stream@@QAEHPAXH@Z
    inline int32_t Read(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, void*, int32_t>>(0x540540, this, arg1, arg2);
    }

    // 0x540680 | ?Write@Stream@@QAEHPAXH@Z
    inline int32_t Write(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, void*, int32_t>>(0x540680, this, arg1, arg2);
    }

    // 0x540780 | ?GetCh@Stream@@QAEHXZ
    inline int32_t GetCh()
    {
        return stub<member_func_t<int32_t, Stream>>(0x540780, this);
    }

    // 0x5407B0 | ?PutCh@Stream@@QAEHE@Z
    inline int32_t PutCh(uint8_t arg1)
    {
        return stub<member_func_t<int32_t, Stream, uint8_t>>(0x5407B0, this, arg1);
    }

    // 0x5407E0 | ?Seek@Stream@@QAEHH@Z
    inline int32_t Seek(int32_t arg1)
    {
        return stub<member_func_t<int32_t, Stream, int32_t>>(0x5407E0, this, arg1);
    }

    // 0x540810 | ?Tell@Stream@@QAEHXZ
    inline int32_t Tell()
    {
        return stub<member_func_t<int32_t, Stream>>(0x540810, this);
    }

    // 0x540820 | ?Size@Stream@@QAEHXZ
    inline int32_t Size()
    {
        return stub<member_func_t<int32_t, Stream>>(0x540820, this);
    }

    // 0x540840 | ?Flush@Stream@@QAEHXZ
    inline int32_t Flush()
    {
        return stub<member_func_t<int32_t, Stream>>(0x540840, this);
    }

    // 0x540930 | ?Error@Stream@@QAEXPAD@Z
    inline void Error(char* arg1)
    {
        return stub<member_func_t<void, Stream, char*>>(0x540930, this, arg1);
    }

    // 0x540970 | ?Printf@Stream@@QAAHPBDZZ
    // Skipped (Variable Arguments)

    // 0x5409C0 | ?Vprintf@Stream@@QAEHPBDPAD@Z
    inline int32_t Vprintf(char const* arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, Stream, char const*, char*>>(0x5409C0, this, arg1, arg2);
    }

    // 0x540A20 | ?Debug@Stream@@QAEXXZ
    inline void Debug()
    {
        return stub<member_func_t<void, Stream>>(0x540A20, this);
    }

    // 0x540A30 | ?PutString@Stream@@QAEHPAD@Z
    inline int32_t PutString(char* arg1)
    {
        return stub<member_func_t<int32_t, Stream, char*>>(0x540A30, this, arg1);
    }

    // 0x540A70 | ?GetString@Stream@@QAEHPADH@Z
    inline int32_t GetString(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, char*, int32_t>>(0x540A70, this, arg1, arg2);
    }

    // 0x540B00 | ?Put@Stream@@QAEHE@Z
    inline int32_t Put(uint8_t arg1)
    {
        return stub<member_func_t<int32_t, Stream, uint8_t>>(0x540B00, this, arg1);
    }

    // 0x540B20 | ?Put@Stream@@QAEHG@Z
    inline int32_t Put(uint16_t arg1)
    {
        return stub<member_func_t<int32_t, Stream, uint16_t>>(0x540B20, this, arg1);
    }

    // 0x540B50 | ?Put@Stream@@QAEHK@Z
    inline int32_t Put(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, Stream, uint32_t>>(0x540B50, this, arg1);
    }

    // 0x540BA0 | ?Put@Stream@@QAEHM@Z
    inline int32_t Put(float arg1)
    {
        return stub<member_func_t<int32_t, Stream, float>>(0x540BA0, this, arg1);
    }

    // 0x540C00 | ?Put@Stream@@QAEHPAEH@Z
    inline int32_t Put(uint8_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, uint8_t*, int32_t>>(0x540C00, this, arg1, arg2);
    }

    // 0x540C20 | ?Put@Stream@@QAEHPAGH@Z
    inline int32_t Put(uint16_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, uint16_t*, int32_t>>(0x540C20, this, arg1, arg2);
    }

    // 0x540C80 | ?Put@Stream@@QAEHPAKH@Z
    inline int32_t Put(uint32_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, uint32_t*, int32_t>>(0x540C80, this, arg1, arg2);
    }

    // 0x540CF0 | ?Get@Stream@@QAEHPAEH@Z
    inline int32_t Get(uint8_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, uint8_t*, int32_t>>(0x540CF0, this, arg1, arg2);
    }

    // 0x540D10 | ?Get@Stream@@QAEHPAGH@Z
    inline int32_t Get(uint16_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, uint16_t*, int32_t>>(0x540D10, this, arg1, arg2);
    }

    // 0x540D50 | ?Get@Stream@@QAEHPAKH@Z
    inline int32_t Get(uint32_t* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, uint32_t*, int32_t>>(0x540D50, this, arg1, arg2);
    }

    // 0x540D90 | ?SwapShorts@Stream@@CAXPAGH@Z
    static inline void SwapShorts(uint16_t* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, uint16_t*, int32_t>>(0x540D90, arg1, arg2);
    }

    // 0x540DC0 | ?SwapLongs@Stream@@CAXPAKH@Z
    static inline void SwapLongs(uint32_t* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, uint32_t*, int32_t>>(0x540DC0, arg1, arg2);
    }

    // 0x540E10 | ?GetShort@Stream@@QAEGXZ
    inline uint16_t GetShort()
    {
        return stub<member_func_t<uint16_t, Stream>>(0x540E10, this);
    }

    // 0x540E30 | ?GetLong@Stream@@QAEKXZ
    inline uint32_t GetLong()
    {
        return stub<member_func_t<uint32_t, Stream>>(0x540E30, this);
    }

    // 0x5404C0 | ??1Stream@@UAE@XZ
    inline ~Stream() override
    {
        stub<member_func_t<void, Stream>>(0x5404C0, this);
    }

    // 0x540900 | ?GetMapping@Stream@@UAEPAXXZ
    virtual inline void* GetMapping()
    {
        return stub<member_func_t<void*, Stream>>(0x540900, this);
    }

    // 0x540910 | ?GetPagerHandle@Stream@@UAEIXZ
    virtual inline uint32_t GetPagerHandle()
    {
        return stub<member_func_t<uint32_t, Stream>>(0x540910, this);
    }

    // 0x540920 | ?GetPagingInfo@Stream@@UAEHAAI00@Z
    virtual inline int32_t GetPagingInfo(uint32_t& arg1, uint32_t& arg2, uint32_t& arg3)
    {
        return stub<member_func_t<int32_t, Stream, uint32_t&, uint32_t&, uint32_t&>>(0x540920, this, arg1, arg2, arg3);
    }

    // 0x567350 | __purecall
    virtual inline int32_t RawRead(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, void*, int32_t>>(0x567350, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline int32_t RawWrite(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, void*, int32_t>>(0x567350, this, arg1, arg2);
    }

    // 0x567350 | __purecall
    virtual inline int32_t RawSeek(int32_t arg1)
    {
        return stub<member_func_t<int32_t, Stream, int32_t>>(0x567350, this, arg1);
    }

    // 0x567350 | __purecall
    virtual inline int32_t RawTell()
    {
        return stub<member_func_t<int32_t, Stream>>(0x567350, this);
    }

    // 0x567350 | __purecall
    virtual inline int32_t RawSize()
    {
        return stub<member_func_t<int32_t, Stream>>(0x567350, this);
    }

    // 0x540A10 | ?RawDebug@Stream@@MAEXXZ
    virtual inline void RawDebug()
    {
        return stub<member_func_t<void, Stream>>(0x540A10, this);
    }

    // 0x5408B0 | ?AlignSize@Stream@@MAEHXZ
    virtual inline int32_t AlignSize()
    {
        return stub<member_func_t<int32_t, Stream>>(0x5408B0, this);
    }

    // 0x5408C0 | ?GetError@Stream@@MAEHPADH@Z
    virtual inline int32_t GetError(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, Stream, char*, int32_t>>(0x5408C0, this, arg1, arg2);
    }
};

// 0x540E50 | ?fprintf@@YAXPAVStream@@PBDZZ
// Skipped (Variable Arguments)

// 0x540E70 | ?fopen@@YAPAVStream@@PAD0@Z
inline class Stream* fopen(char* arg1, char* arg2)
{
    return stub<cdecl_t<class Stream*, char*, char*>>(0x540E70, arg1, arg2);
}

// 0x540EB0 | ?fseek@@YAHPAVStream@@HH@Z
inline int32_t fseek(class Stream* arg1, int32_t arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, class Stream*, int32_t, int32_t>>(0x540EB0, arg1, arg2, arg3);
}

// 0x540F10 | _vprintf

// 0x540F30 | _printf

// 0x540F60 | ?fgets@@YAHPADHPAVStream@@@Z
inline int32_t fgets(char* arg1, int32_t arg2, class Stream* arg3)
{
    return stub<cdecl_t<int32_t, char*, int32_t, class Stream*>>(0x540F60, arg1, arg2, arg3);
}

// 0x540FD0 | ?fscanf@@YAHPAVStream@@PBDZZ
// Skipped (Variable Arguments)

// 0x70EDA0 | ?EnableBinaryFileMapping@@3HA
inline extern_var(0x70EDA0, int32_t, EnableBinaryFileMapping);

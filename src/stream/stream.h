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
    stream:stream

    0x540430 | public: __thiscall Stream::Stream(void *,int,class FileSystem *) | ??0Stream@@QAE@PAXHPAVFileSystem@@@Z
    0x5404C0 | public: virtual __thiscall Stream::~Stream(void) | ??1Stream@@UAE@XZ
    0x540540 | public: int __thiscall Stream::Read(void *,int) | ?Read@Stream@@QAEHPAXH@Z
    0x540680 | public: int __thiscall Stream::Write(void *,int) | ?Write@Stream@@QAEHPAXH@Z
    0x540780 | public: int __thiscall Stream::GetCh(void) | ?GetCh@Stream@@QAEHXZ
    0x5407B0 | public: int __thiscall Stream::PutCh(unsigned char) | ?PutCh@Stream@@QAEHE@Z
    0x5407E0 | public: int __thiscall Stream::Seek(int) | ?Seek@Stream@@QAEHH@Z
    0x540810 | public: int __thiscall Stream::Tell(void) | ?Tell@Stream@@QAEHXZ
    0x540820 | public: int __thiscall Stream::Size(void) | ?Size@Stream@@QAEHXZ
    0x540840 | public: int __thiscall Stream::Flush(void) | ?Flush@Stream@@QAEHXZ
    0x5408B0 | protected: virtual int __thiscall Stream::AlignSize(void) | ?AlignSize@Stream@@MAEHXZ
    0x5408C0 | protected: virtual int __thiscall Stream::GetError(char *,int) | ?GetError@Stream@@MAEHPADH@Z
    0x540900 | public: virtual void * __thiscall Stream::GetMapping(void) | ?GetMapping@Stream@@UAEPAXXZ
    0x540910 | public: virtual unsigned int __thiscall Stream::GetPagerHandle(void) | ?GetPagerHandle@Stream@@UAEIXZ
    0x540920 | public: virtual int __thiscall Stream::GetPagingInfo(unsigned int &,unsigned int &,unsigned int &) | ?GetPagingInfo@Stream@@UAEHAAI00@Z
    0x540930 | public: void __thiscall Stream::Error(char *) | ?Error@Stream@@QAEXPAD@Z
    0x540970 | public: int __cdecl Stream::Printf(char const *,...) | ?Printf@Stream@@QAAHPBDZZ
    0x5409C0 | public: int __thiscall Stream::Vprintf(char const *,char *) | ?Vprintf@Stream@@QAEHPBDPAD@Z
    0x540A10 | protected: virtual void __thiscall Stream::RawDebug(void) | ?RawDebug@Stream@@MAEXXZ
    0x540A20 | public: void __thiscall Stream::Debug(void) | ?Debug@Stream@@QAEXXZ
    0x540A30 | public: int __thiscall Stream::PutString(char *) | ?PutString@Stream@@QAEHPAD@Z
    0x540A70 | public: int __thiscall Stream::GetString(char *,int) | ?GetString@Stream@@QAEHPADH@Z
    0x540B00 | public: int __thiscall Stream::Put(unsigned char) | ?Put@Stream@@QAEHE@Z
    0x540B20 | public: int __thiscall Stream::Put(unsigned short) | ?Put@Stream@@QAEHG@Z
    0x540B50 | public: int __thiscall Stream::Put(unsigned long) | ?Put@Stream@@QAEHK@Z
    0x540BA0 | public: int __thiscall Stream::Put(float) | ?Put@Stream@@QAEHM@Z
    0x540C00 | public: int __thiscall Stream::Put(unsigned char *,int) | ?Put@Stream@@QAEHPAEH@Z
    0x540C20 | public: int __thiscall Stream::Put(unsigned short *,int) | ?Put@Stream@@QAEHPAGH@Z
    0x540C80 | public: int __thiscall Stream::Put(unsigned long *,int) | ?Put@Stream@@QAEHPAKH@Z
    0x540CF0 | public: int __thiscall Stream::Get(unsigned char *,int) | ?Get@Stream@@QAEHPAEH@Z
    0x540D10 | public: int __thiscall Stream::Get(unsigned short *,int) | ?Get@Stream@@QAEHPAGH@Z
    0x540D50 | public: int __thiscall Stream::Get(unsigned long *,int) | ?Get@Stream@@QAEHPAKH@Z
    0x540D90 | private: static void __cdecl Stream::SwapShorts(unsigned short *,int) | ?SwapShorts@Stream@@CAXPAGH@Z
    0x540DC0 | private: static void __cdecl Stream::SwapLongs(unsigned long *,int) | ?SwapLongs@Stream@@CAXPAKH@Z
    0x540E10 | public: unsigned short __thiscall Stream::GetShort(void) | ?GetShort@Stream@@QAEGXZ
    0x540E30 | public: unsigned long __thiscall Stream::GetLong(void) | ?GetLong@Stream@@QAEKXZ
    0x540E50 | void __cdecl fprintf(class Stream *,char const *,...) | ?fprintf@@YAXPAVStream@@PBDZZ
    0x540E70 | class Stream * __cdecl fopen(char *,char *) | ?fopen@@YAPAVStream@@PAD0@Z
    0x540EB0 | int __cdecl fseek(class Stream *,int,int) | ?fseek@@YAHPAVStream@@HH@Z
    0x540F10 | _vprintf
    0x540F30 | _printf
    0x540F60 | int __cdecl fgets(char *,int,class Stream *) | ?fgets@@YAHPADHPAVStream@@@Z
    0x540FD0 | int __cdecl fscanf(class Stream *,char const *,...) | ?fscanf@@YAHPAVStream@@PBDZZ
    0x541080 | public: virtual void * __thiscall Stream::`vector deleting destructor'(unsigned int) | ??_EStream@@UAEPAXI@Z
    0x541080 | public: virtual void * __thiscall Stream::`scalar deleting destructor'(unsigned int) | ??_GStream@@UAEPAXI@Z
    0x595E18 | const Stream::`vftable' | ??_7Stream@@6B@
    0x70EDA0 | int EnableBinaryFileMapping | ?EnableBinaryFileMapping@@3HA
*/

#include "data7/base.h"

#include <cstdarg>

class FileSystem;

class Stream : Base
{
public:
    // Stream::`vftable' @ 0x595E18

    uint8_t* m_pBuffer {nullptr};
    uint32_t m_Position {0};
    int32_t m_BufferStart {0};
    int32_t m_BufferEnd {0};
    int32_t m_BufferCapacity {0};
    FileSystem* m_pFileSystem {nullptr};
    uint8_t m_Flags {0};
    uint8_t m_SwapEndian {0};
    uint8_t m_IsLittleEndian {0};
    uint8_t m_Initialized {0};

    // 0x540430 | ??0Stream@@QAE@PAXHPAVFileSystem@@@Z
    Stream(void* buffer, int32_t buffer_size, class FileSystem* file_system);

    // 0x540540 | ?Read@Stream@@QAEHPAXH@Z
    int32_t Read(void* output, int32_t length);

    // 0x540680 | ?Write@Stream@@QAEHPAXH@Z
    int32_t Write(const void* input, int32_t length);

    // 0x540780 | ?GetCh@Stream@@QAEHXZ
    int32_t GetCh();

    // 0x5407B0 | ?PutCh@Stream@@QAEHE@Z
    int32_t PutCh(uint8_t value);

    // 0x5407E0 | ?Seek@Stream@@QAEHH@Z
    int32_t Seek(int32_t position);

    // 0x540810 | ?Tell@Stream@@QAEHXZ
    int32_t Tell();

    // 0x540820 | ?Size@Stream@@QAEHXZ
    int32_t Size();

    // 0x540840 | ?Flush@Stream@@QAEHXZ
    int32_t Flush();

    // 0x540930 | ?Error@Stream@@QAEXPAD@Z
    void Error(const char* location);

    // 0x540970 | ?Printf@Stream@@QAAHPBDZZ
    int32_t Printf(const char* format, ...);

    // 0x5409C0 | ?Vprintf@Stream@@QAEHPBDPAD@Z
    int32_t Vprintf(char const* format, std::va_list args);

    // 0x540A20 | ?Debug@Stream@@QAEXXZ
    void Debug();

    // 0x540A30 | ?PutString@Stream@@QAEHPAD@Z
    int32_t PutString(const char* value);

    // 0x540A70 | ?GetString@Stream@@QAEHPADH@Z
    int32_t GetString(char* buffer, int32_t length);

    // 0x540B00 | ?Put@Stream@@QAEHE@Z
    int32_t Put(uint8_t value);

    // 0x540B20 | ?Put@Stream@@QAEHG@Z
    int32_t Put(uint16_t value);

    // 0x540B50 | ?Put@Stream@@QAEHK@Z
    int32_t Put(uint32_t value);

    // 0x540BA0 | ?Put@Stream@@QAEHM@Z
    int32_t Put(float value);

    // 0x540C00 | ?Put@Stream@@QAEHPAEH@Z
    int32_t Put(const uint8_t* values, int32_t count);

    // 0x540C20 | ?Put@Stream@@QAEHPAGH@Z
    int32_t Put(const uint16_t* values, int32_t count);

    // 0x540C80 | ?Put@Stream@@QAEHPAKH@Z
    int32_t Put(const uint32_t* values, int32_t count);

    // 0x540CF0 | ?Get@Stream@@QAEHPAEH@Z
    int32_t GetUnchecked(uint8_t* values, int32_t count);

    // 0x540D10 | ?Get@Stream@@QAEHPAGH@Z
    int32_t GetUnchecked(uint16_t* values, int32_t count);

    // 0x540D50 | ?Get@Stream@@QAEHPAKH@Z
    int32_t GetUnchecked(uint32_t* values, int32_t count);

    // 0x540D90 | ?SwapShorts@Stream@@CAXPAGH@Z
    static void SwapShorts(uint16_t* values, int32_t count);

    // 0x540DC0 | ?SwapLongs@Stream@@CAXPAKH@Z
    static void SwapLongs(uint32_t* values, int32_t count);

    // 0x540E10 | ?GetShort@Stream@@QAEGXZ
    uint16_t GetShort();

    // 0x540E30 | ?GetLong@Stream@@QAEKXZ
    uint32_t GetLong();

    // 0x5404C0 | ??1Stream@@UAE@XZ
    ~Stream() override;

    // 0x540900 | ?GetMapping@Stream@@UAEPAXXZ
    virtual void* GetMapping();

    // 0x540910 | ?GetPagerHandle@Stream@@UAEIXZ
    virtual uint32_t GetPagerHandle();

    // 0x540920 | ?GetPagingInfo@Stream@@UAEHAAI00@Z
    virtual int32_t GetPagingInfo(uint32_t& handle, uint32_t& offset, uint32_t& size);

    // 0x567350 | __purecall
    virtual inline int32_t RawRead(void* arg1, int32_t arg2) = 0;

    // 0x567350 | __purecall
    virtual inline int32_t RawWrite(void* arg1, int32_t arg2) = 0;

    // 0x567350 | __purecall
    virtual inline int32_t RawSeek(int32_t arg1) = 0;

    // 0x567350 | __purecall
    virtual inline int32_t RawTell() = 0;

    // 0x567350 | __purecall
    virtual inline int32_t RawSize() = 0;

    // 0x540A10 | ?RawDebug@Stream@@MAEXXZ
    virtual void RawDebug();

    // 0x5408B0 | ?AlignSize@Stream@@MAEHXZ
    virtual int32_t AlignSize();

    // 0x5408C0 | ?GetError@Stream@@MAEHPADH@Z
    virtual int32_t GetError(char* buffer, int32_t length);
};

// 0x540E50 | ?fprintf@@YAXPAVStream@@PBDZZ
void fprintf(Stream* stream, const char* format, ...);

// 0x540E70 | ?fopen@@YAPAVStream@@PAD0@Z
class Stream* s_fopen(const char* filename, const char* mode);

// 0x540EB0 | ?fseek@@YAHPAVStream@@HH@Z
int32_t fseek(class Stream* stream, int32_t offset, int32_t origin);

// 0x540F10 | _vprintf

// 0x540F30 | _printf

// 0x540F60 | ?fgets@@YAHPADHPAVStream@@@Z
int32_t fgets(char* buffer, int32_t length, class Stream* stream);

// 0x540FD0 | ?fscanf@@YAHPAVStream@@PBDZZ
int32_t fscanf(Stream* stream, const char* format, ...);

// 0x70EDA0 | ?EnableBinaryFileMapping@@3HA
inline extern_var(0x70EDA0, int32_t, EnableBinaryFileMapping);

check_size(Stream, 0x20);

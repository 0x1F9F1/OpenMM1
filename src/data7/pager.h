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
    data7:pager

    0x711B08 | class ipcMessageQueue PAGER | ?PAGER@@3VipcMessageQueue@@A
    0x711B30 | int EnablePaging | ?EnablePaging@@3HA
*/

#include "hooking.h"

// 0x711B08 | ?PAGER@@3VipcMessageQueue@@A
inline extern_var(0x711B08, class ipcMessageQueue, PAGER);

// 0x711B30 | ?EnablePaging@@3HA
inline extern_var(0x711B30, int32_t, EnablePaging);

struct PagerInfo_t
{
public:
    void* m_PagerHandle {nullptr};
    uint32_t m_Offset {0};
    uint32_t m_Size {0};

    // 0x542150 | ?Read@PagerInfo_t@@QAEXPAXII@Z
    inline void Read(void* arg1, uint32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, PagerInfo_t, void*, uint32_t, uint32_t>>(0x542150, this, arg1, arg2, arg3);
    }
};

check_size(PagerInfo_t, 12);
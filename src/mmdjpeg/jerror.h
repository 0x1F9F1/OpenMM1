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
    mmdjpeg:jerror

    0x55F1B0 | struct jpeg_error_mgr * __cdecl jpeg_std_error(struct jpeg_error_mgr *) | ?jpeg_std_error@@YAPAUjpeg_error_mgr@@PAU1@@Z
    0x55F200 | void __cdecl error_exit(struct jpeg_common_struct *) | ?error_exit@@YAXPAUjpeg_common_struct@@@Z
    0x55F230 | void __cdecl output_message(struct jpeg_common_struct *) | ?output_message@@YAXPAUjpeg_common_struct@@@Z
    0x55F270 | void __cdecl emit_message(struct jpeg_common_struct *,int) | ?emit_message@@YAXPAUjpeg_common_struct@@H@Z
    0x55F2B0 | void __cdecl format_message(struct jpeg_common_struct *,char *) | ?format_message@@YAXPAUjpeg_common_struct@@PAD@Z
    0x55F370 | void __cdecl reset_error_mgr(struct jpeg_common_struct *) | ?reset_error_mgr@@YAXPAUjpeg_common_struct@@@Z
*/

// 0x55F1B0 | ?jpeg_std_error@@YAPAUjpeg_error_mgr@@PAU1@@Z
inline struct jpeg_error_mgr* jpeg_std_error(struct jpeg_error_mgr* arg1)
{
    return stub<cdecl_t<struct jpeg_error_mgr*, struct jpeg_error_mgr*>>(0x55F1B0, arg1);
}

// 0x55F200 | ?error_exit@@YAXPAUjpeg_common_struct@@@Z
inline void error_exit(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x55F200, arg1);
}

// 0x55F230 | ?output_message@@YAXPAUjpeg_common_struct@@@Z
inline void output_message(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x55F230, arg1);
}

// 0x55F270 | ?emit_message@@YAXPAUjpeg_common_struct@@H@Z
inline void emit_message(struct jpeg_common_struct* arg1, int32_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, int32_t>>(0x55F270, arg1, arg2);
}

// 0x55F2B0 | ?format_message@@YAXPAUjpeg_common_struct@@PAD@Z
inline void format_message(struct jpeg_common_struct* arg1, char* arg2)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*, char*>>(0x55F2B0, arg1, arg2);
}

// 0x55F370 | ?reset_error_mgr@@YAXPAUjpeg_common_struct@@@Z
inline void reset_error_mgr(struct jpeg_common_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_common_struct*>>(0x55F370, arg1);
}

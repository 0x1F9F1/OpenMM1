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

#include "camera.h"

#include "agi/pipeline.h"

void asCamera::SetView(float hfov, float vfov, float near, float far)
{
    // See asCamera::Update

    float hfov_scale = mem::field<float>(this, 0x38);
    float vfov_scale = mem::field<float>(this, 0x3C);

    float fov_scale =
        (agiPipeline::CurrentPipe->m_Width * hfov_scale) / (agiPipeline::CurrentPipe->m_Height * vfov_scale);

    hfov *= ((fov_scale * 0.75f) / (vfov / 1.25f));

    mem::field<float>(this, 0x6C) = hfov; // Horizontal FOV

    // mem::field<float>(this, 0x74) = 1.0f; // Vertical FOV
    mem::field<bool32_t>(this, 0xB8) = 1; // Dynamically calculate vertical FOV

    mem::field<float>(this, 0x78) = near; // Near Clip
    mem::field<float>(this, 0x7C) = far;  // Far Clip
}

define_dummy_symbol(ascamera);

run_once([] { auto_hook(0x513D00, asCamera::SetView); });
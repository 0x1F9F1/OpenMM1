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

#include "mmtext.h"

#include "agi/bitmap.h"
#include "agi/pipeline.h"

#include "data7/assert.h"
#include "data7/printer.h"

#include "agisdl/sdlfont.h"

void mmTextNode::Init(float arg1, float arg2, float arg3, float arg4, int32_t arg5, int32_t arg6)
{
    m_Count = 0;
    m_Max = arg5;
    m_Text = new mmTextData[m_Max];

    m_Bitmap = agiPipeline::CurrentPipe->CreateBitmap();
    char name[128];
    sprintf_s(name, "*TextNode:%08x", (uint32_t) this);
    m_Bitmap->Init(name, 2.0f, 2.0f, arg6);

    m_dword50 = 0xFFFFFF00;
}

mmTextNode::~mmTextNode()
{
    delete[] m_Text;
}

void* mmText::CreateLocFont(LocString* arg1, int32_t arg2)
{
    void* result = sdlLoadFont("GILI____.TTF", 16);

    Displayf("Loc Font: %s, %p", arg1, result);

    return result;
}

void* mmText::CreateFont(char* arg1, int32_t arg2)
{
    Displayf("Font: %s", arg1);

    return nullptr;
}

void mmText::DeleteFont(void* arg1)
{
    sdlDeleteFont(arg1);
}

void* mmText::GetDC(agiSurfaceDesc* arg1)
{
    return nullptr;
}

void mmText::ReleaseDC()
{}

agiBitmap* mmText::CreateFitBitmap(char* text, void* font, int32_t fg_color, int32_t shadow_color)
{
    agiBitmap* result = agiPipeline::CurrentPipe->CreateBitmap();

    char name[128];
    sprintf_s(name, "*FitBitmap:%08x", (uint32_t) result);

    result->Init(name, 2.0f, 2.0f, 3);

    result->SafeBeginGfx();

    return result;
}

void mmText::Draw(agiSurfaceDesc* arg1, float arg2, float arg3, char* arg4, void* arg5)
{
    unimplemented();
}

void mmText::Draw2(agiSurfaceDesc* arg1, float arg2, float arg3, char* arg4, void* arg5, uint32_t arg6)
{
    unimplemented();
}

define_dummy_symbol(mmtext);

run_once([] {
    auto_hook(0x4F0970, mmTextNode::Init);

    auto_hook(0x4F0280, mmText::CreateLocFont);
    auto_hook(0x4F0350, mmText::CreateFont);
    auto_hook(0x4F0380, mmText::DeleteFont);
    auto_hook(0x4F0390, mmText::GetDC);
    auto_hook(0x4F04E0, mmText::CreateFitBitmap);
    auto_hook(0x4F0700, mmText::Draw);
    auto_hook(0x4F0790, mmText::Draw2);
});

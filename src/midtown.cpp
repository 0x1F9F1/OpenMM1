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

#include "midtown.h"

#include "agi/getdlp.h"
#include "agi/physlib.h"
#include "agi/pipeline.h"
#include "agi/texdef.h"
#include "agid3d/pcpipe.h"
#include "agisw/swddraw.h"
#include "agisw/swpipe.h"
#include "arts7/sim.h"
#include "data7/args.h"
#include "data7/cache.h"
#include "data7/cstr.h"
#include "data7/format.h"
#include "data7/global.h"
#include "data7/memstat.h"
#include "data7/metaclass.h"
#include "data7/ptr.h"
#include "data7/timer.h"
#include "eventq7/winevent.h"
#include "localize/localize.h"
#include "memory/allocator.h"
#include "memory/valloc.h"
#include "mmaudio/manager.h"
#include "mmcityinfo/state.h"
#include "mmphysics/phys.h"
#include "mmui/graphics.h"
#include "pcwindis/dxinit.h"
#include "pcwindis/dxsetup.h"
#include "pcwindis/setupdata.h"
#include "stream/hfsystem.h"
#include "stream/stream.h"
#include "stream/vfsystem.h"

#ifdef USE_SDL2
#    include "agigl/glpipe.h"
#endif

#include <cstring>
#include <mem/cmd_param-inl.h>

static mem::cmd_param PARAM_width {"width"};
static mem::cmd_param PARAM_height {"height"};

agiPipeline* CreatePipeline(int32_t argc, char** argv)
{
    dxiRendererInfo_t* info = &dxiInfo[dxiRendererChoice];
    Ptr<agiPipeline> result;

    if (bHaveIME)
    {
        dxiShutdown();

        if (MMSTATE.InGame)
        {
            InitialCursorState = -1;

            dxiFlags = dxiFlags & 0xFFFFFFFD | 5;
        }
        else
        {
            dxiFlags = dxiFlags & 0xFFFFFFFA | 2;

            if (dxiChangeDisplaySettings(640, 480, 16))
            {
                MessageBoxA(NULL, LANG_STRING(0xC6), APPTITLE, MB_ICONERROR);

                Quit(0);
            }

            InitialCursorState = 0;
        }

        dxiInit(APPTITLE, 0, 0);
    }

    if (MMSTATE.InGame)
    {
        bRenderToSystem = RenderToSystemMemory;

        if (info->m_Type)
        {
            result.Reset(
#ifdef USE_SDL2
                glCreatePipeline(argc, argv)
#else
                d3dCreatePipeline(argc, argv)
#endif
            );
        }
        else
        {
            result.Reset(swCreatePipeline(argc, argv));
        }

        if (info->m_ResCount)
        {
            dxiResolution* res = &info->m_Resolutions[info->m_ResolutionIndex];

            result->m_Width = PARAM_width.get_or(res->uWidth);
            result->m_Height = PARAM_height.get_or(res->uHeight);
        }

        if (result->Validate())
        {
            result->EndAllGfx();
            result.Reset();

            MessageBoxA(NULL, LANG_STRING(0xC8), APPTITLE, MB_ICONERROR);

            result.Reset(swCreatePipeline(argc, argv));

            result->m_Width = 640;
            result->m_Height = 480;
        }
    }
    else
    {
        bRenderToSystem = 1;

        if (!info->m_Type || bHaveIME)
        {
            result.Reset(swCreatePipeline(argc, argv));
        }
        else
        {
            result.Reset(
#ifdef USE_SDL2
                glCreatePipeline(argc, argv)
#else
                d3dCreatePipeline(argc, argv)
#endif
            );
        }

        result->m_Width = 640;
        result->m_Height = 480;

        if (result->Validate())
        {
            MessageBoxA(0, LANG_STRING(0xC7), APPTITLE, MB_ICONERROR);

            Quit(0);
        }
    }

    return result.Release();
}

void ApplicationHelper(int32_t argc, char** argv)
{
#if 0
    CURHEAP = &CRTALLOCATOR;
    CloseCallback = GameCloseCallback;
    DevelopmentMode = 1;

    GBArgs.ParseArgs(argc, argv);

    EnableNormalOutput = 1;
    EnableDebugOutput = 1;

    Displayf("%s - %s", APPTITLE, VERSION_STRING);

    if (page_override != -1)
    {
        Warningf("**** PAGING: (%s %s %s)", (page_override & 1) ? "textures" : "", (page_override & 4) ? "bounds" : "",
            (page_override & 2) ? "geom" : "");
    }
    else
    {
        Warningf("**** PAGING: As specified in UI");
    }

    HANDLE hMutex = CreateMutexA(0, 0, "MidtownMadnessMutex");

    if (!hMutex || WaitForSingleObject(hMutex, 1))
    {
        MessageBoxA(0, LANG_STRING(0xC9), APPTITLE, MB_ICONERROR);

        Quit(0);
    }

    MEMORYSTATUSEX memory;
    memory.dwLength = sizeof(memory);
    Assert(GlobalMemoryStatusEx(&memory));

    Displayf("Avail Phys: %lluM  Avail Page: %lluM  Avail addr: %lluM", memory.ullAvailPhys >> 20,
        memory.ullAvailPageFile >> 20, memory.ullAvailVirtual >> 20);

    if (memory.ullAvailPageFile + memory.ullAvailPhys < 0x5000000)
    {
        MessageBoxA(0, LANG_STRING(0xCA), APPTITLE, MB_ICONERROR);
        Quit(0);
    }

    ULARGE_INTEGER FreeBytesAvailableToCaller;

    if (GetDiskFreeSpaceExA(nullptr, &FreeBytesAvailableToCaller, nullptr, nullptr))
    {
        if (FreeBytesAvailableToCaller.QuadPart < 0x20000)
        {
            MessageBoxA(0, LANG_STRING(0xCB), APPTITLE, MB_OK);
        }
    }

    dxiConfig(argc, argv);

    ShowCursor(0);

    dxiInit(APPTITLE, argc, argv);
    Displayf("dxiInit returned.");

    HierAllowPath = "players";

    CURHEAP = &ALLOCATOR;

    SAFEHEAP.Init(0x8000000, 1);

    MMSTATE.AudFlags = 0;

    uint32_t aud_flags = 0;

    aud_flags |= AudManager::GetCommentaryOnMask();
    aud_flags |= AudManager::GetCDMusicOnMask();
    aud_flags |= AudManager::GetSoundFXOnMask();
    aud_flags |= AudManager::GetHiSampleSizeMask();
    aud_flags |= AudManager::GetHiResMask();
    aud_flags |= AudManager::GetStereoOnMask();

    MMSTATE.AudFlags = aud_flags;
    MMSTATE.AudNumChannels = 32;
    MMSTATE.AutoTransmission = 1;
    MMSTATE.EnableFF = 1;
    MMSTATE.TimeOfDay = 1;
    MMSTATE.AudDeviceName[0] = '\0';
    MMSTATE.EnableCDPlayer = 0;
    MMSTATE.WaveVolume = 1.0;
    MMSTATE.CDVolume = 0.5;
    MMSTATE.AudBalance = 0.0;
    MMSTATE.CurrentCar = 2;
    MMSTATE.AmbientDensity = 0.33000001;
    MMSTATE.NumCops = 1.0;
    MMSTATE.MaxOpponents = 7.0;
    MMSTATE.CopBehaviorFlag = 0;
    MMSTATE.PedDensity = 1.0;
    MMSTATE.GameMode = 0;
    MMSTATE.PhysicsRealism = 0.75;
    MMSTATE.Weather = 0;
    MMSTATE.ControllerType = 0;
    MMSTATE.DisableDamage = 0;
    MMSTATE.DisableAI = 0;
    MMSTATE.TimeLimit = 0.0;
    MMSTATE.DisableCustomEvents = 0;
    MMSTATE.DisablePerpEscape = 0;
    MMSTATE.AmbientCount = 100;
    MMSTATE.CameraIndex = 0;
    MMSTATE.HasHudmap = 0;
    MMSTATE.WideView = 0;
    MMSTATE.DashView = 0;

    strcpy_s(MMSTATE.IntroText, "");

    Warningf("Running with %s priority class.", "high");

    SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);

    InitialCursorState = -1;
    PHYS.Gravity = -19.799999;
    strcpy(CityName, "chicago");

    char module_file[1024];
    const char* file_path = nullptr;

    while (!MMSTATE.Closing)
    {
        LoadTimer.Reset();
        SAFEHEAP.Restart();
        BeginMemStat("Module init");
        InitEventQueue();
        BeginMemStat("AGI startup");

        if (InitPipeline(APPTITLE, argc, argv))
        {
            ShutdownPipeline();
            DeallocateEventQueue();
            if (!MMSTATE.InGame)
            {
                Quitf("Can't start UI, this should never happen.");
            }
            MessageBoxA(0, LANG_STRING(0xCC), APPTITLE, MB_ICONERROR);
            MMSTATE.InGame = 0;
        }
        else
        {
            EndMemStat();
            BeginMemStat("ARTS Init");

            /*asSimulation* sim = */ new asSimulation();

            ARTSPTR->Init(".", argc, argv);

            if (!VFS)
            {
                if (!file_path)
                {
                    GetModuleFileNameA(0, module_file, 1024u);

                    char* module_dir = strrchr(module_file, '\\');

                    if (module_dir)
                    {
                        *module_dir = '\0';

                        file_path = module_file;
                    }
                    else
                    {
                        file_path = ".";
                    }
                }

                for (FileInfo* i = HFS.FirstEntry(file_path); i; i = HFS.NextEntry(i))
                {
                    char* v46 = strrchr(i->Path, '.');

                    if (v46)
                    {
                        if (!stricmp(v46, ".AR"))
                        {
                            if (_strnicmp(i->Path, "TEST", 4u))
                            {
                                char archive[1024];
                                formatf(archive, "%s/%s", file_path, i->Path);
                                Ptr<Stream> stream {s_fopen(archive, "r")};

                                if (stream)
                                {
                                    /*VirtualFileSystem* vfs = */ new VirtualFileSystem(stream.Release());

                                    Displayf("Adding '%s' in autosearch...", i);

                                    DevelopmentMode = 1;
                                }
                            }
                        }
                    }
                }

                Ptr<Stream> v49 {s_fopen("mtl/physics.db", "r")};

                if (v49)
                {
                    agiPhysLib.Load(v49.Get());

                    v49.Reset();
                }
            }

            EndMemStat();
            FlagGetDLPTemplateCalls = DevelopmentMode == 0;
            ARTSPTR->dword280 = 1;
            BeginMemStat("Audio manager");
            InitAudioManager();
            EndMemStat();
            BeginMemStat("GameInput");
            v58 = (mmInput*) operator new(576);
            a1a = (int) v58;
            v85 = 2;
            if (v58)
            {
                mmInput::mmInput(v58);
            }
            v85 = -1;
            GameInputPtr->AttachToPipe();
            GameInputPtr->Init(MMSTATE.ControllerType);
            EndMemStat();
            a1a = 0;
            mmLoader::mmLoader((struct mmLoader*) &exe_file[312]);
            v85 = 3;
            if (page_override == -1)
            {
                if (MMSTATE.InGame)
                {
                    EnablePaging = MMSTATE.SpeedLoading != 0 ? 3 : 0;
                }
                else
                {
                    EnablePaging = 1;
                }
            }
            else
            {
                EnablePaging = page_override;
            }
            BeginMemStat("Cache and pager.");

            if (EnablePaging)
            {
                CACHE.Init(0x100000u, 2048, "CACHE");
                TEXCACHE.Init(0x200000u, 256, "TEXCACHE");
            }

            PAGER.Init(64, 0);

            EndMemStat();
            mmLoader::Reset((Timer*) &exe_file[312]);
            if (MMSTATE.InGame)
            {
                if (MMSTATE.InGame == 1)
                {
                    if (GenerateLoadScreenName())
                    {
                        v69 = 0.86250001;
                        NumberOfCharsWritten_4a = 0.57190001;
                    }
                    else
                    {
                        v69 = 0.94999999;
                        NumberOfCharsWritten_4a = 0.023399999;
                    }
                    mmLoader::Init(&exe_file[312], (int) LoadScreen, NumberOfCharsWritten_4a, v69);
                    BeginMemStat("GameManager");
                    v62 = (char*) AngelReadString(0xCFu);
                    mmLoader::BeginTask((int) &exe_file[312], v62, 0.0);
                    AudManager::AssignWaveVolume(AUDMGRPTR, MMSTATE.WaveVolume);
                    AudManager::AssignCDVolume(AUDMGRPTR, MMSTATE.CDVolume);
                    if (MMSTATE.EnableCDPlayer)
                    {
                        AudManager::PlayCDTrack(2, 1u);
                    }
                    v63 = (mmGameManager*) operator new(84);
                    no_movie = (int) v63;
                    LOBYTE(v85) = 5;
                    if (v63)
                    {
                        v57 = (struct asNode*) mmGameManager::mmGameManager(v63);
                    }
                    LOBYTE(v85) = 3;
                    a1a = (int) v57;
                    asNode::AddChild(&ARTSPTR->Base, v57);
                    (*((void(__thiscall**)(struct asNode*)) v57->vTable + 7))(v57);
                    v61 = v57;
                    CycleState = 2;
                    no_movie = (int) v57;
                    EndMemStat();
                }
                else
                {
                    v61 = (struct asNode*) no_movie;
                }
            }
            else
            {
                mmLoader::Init(&exe_file[312], (int) "title_screen", 0.0, 0.0);
                if (GraphicsChange)
                {
                    NumberOfCharsWritten_4 = 205;
                }
                else
                {
                    if (MMSTATE.EnableCDPlayer)
                    {
                        AudManager::PlayCDTrack(3, 1u);
                    }
                    NumberOfCharsWritten_4 = 206;
                }
                v59 = (char*) AngelReadString(NumberOfCharsWritten_4);
                mmLoader::BeginTask((int) &exe_file[312], v59, 0.0);
                v60 = operator new(219184);
                v79 = v60;
                LOBYTE(v85) = 4;
                if (v60)
                {
                    v57 = mmInterface::mmInterface((struct mmInterface*) v60, 1, 0);
                }
                LOBYTE(v85) = 3;
                v79 = v57;
                asNode::AddChild(&ARTSPTR->Base, v57);
                (*((void(__thiscall**)(struct asNode*)) v57->vTable + 7))(v57);
                v61 = v57;
                no_movie = (int) v57;
                mmInterface::ShowMain((mmInterface*) v57, CycleState);
                CycleState = 1;
            }

            ARTSPTR->ResChange(agiPipeline::CurrentPipe->m_Width, agiPipeline::CurrentPipe->m_Height);

            mmLoader::EndTask(0.0);
            mmLoader::~mmLoader((mmLoader*) &exe_file[312]);
            MMSTATE.InGame = -1;
            MMSTATE.Closing = 0;
            ALLOCATOR.SanityCheck();

            TouchMemory(ALLOCATOR.m_pHeap, ALLOCATOR.m_HeapOffset);
            EndMemStat();
            *(double*) &v64 = Timer::Time(&LoadTimer);
            Displayf("********* Load time = %f seconds; %dK allocated.", (_DWORD) v64, (_DWORD)(v64 >> 32));
            if (logging)
            {
                ShowCursor(1);
                logging = 0;
            }

            GameLoop(pinterface, pmanager, nullptr);

            PAGER.Shutdown();
            AUDMGRPTR->Disable(-1, -1);
            ALLOCATOR.SanityCheck();
            if (v61)
            {
                ((void(__thiscall*)(struct asNode*, signed int)) * v61->vTable)(v61, 1);
            }
            if (EnablePaging)
            {
                TEXCACHE.Flush();
                CACHE.Flush();
            }
            if (GameInputPtr)
            {
                ((void(__stdcall*)(signed int)) * GameInputPtr->asnode0.vTable)(1);
            }
            if (AUDMGRPTR)
            {
                (**(void(__stdcall***)(signed int)) AUDMGRPTR)(1);
            }

            if (!VFS)
            {
                for (int32_t i = FileSystem::FSCount; i > 1; --i)
                {
                    delete FileSystem::FS[i - 1];
                }
            }

            if (ARTSPTR)
            {
                delete ARTSPTR;
            }

            ShutdownPipeline();
            if (bHaveIME)
            {
                dxiShutdown();
                ChangeDisplaySettingsA(0, 0);
            }
            DeallocateEventQueue();

            HashTable::KillAll();
            MetaClass::UndeclareAll();
        }

        SAFEHEAP.Kill();
        dxiShutdown();
        dxiChangeDisplaySettings(0, 0, 0);
    }
#else
    return stub<cdecl_t<void, int32_t, char**>>(0x401670, argc, argv);
#endif
}

void Application(int32_t argc, char** argv)
{
    dxiIcon = 111;

    SetProcessAffinityMask(GetCurrentProcess(), 1);

    __try
    {
        ApplicationHelper(argc, argv);

        Displayf("Normal exit.");
    }
    __except (GameFilter(GetExceptionInformation()))
    {
        // AIMAP.Dump()

        Quitf("Exception caught during init.");
    }
}

static char Main_ExecPath[1024] {};
static char* Main_ArgV[128] {};

alignas(std::max_align_t) static char InitHeap[0x10000];

int CALLBACK MidtownMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, LPSTR lpCmdLine, int /*nCmdShow*/)
{
    asMemoryAllocator init_alloc;
    init_alloc.Init(InitHeap, 0x10000, 1);
    CURHEAP = &init_alloc;

    GetModuleFileNameA(0, Main_ExecPath, 1024);

    int argc = 0;
    Main_ArgV[argc++] = Main_ExecPath;

    char* current = lpCmdLine;

    while (*current)
    {
        current += std::strspn(current, " \t");

        char* cmd_start = nullptr;

        if (*current == '"')
        {
            ++current;

            cmd_start = current;

            current = std::strchr(current, '"');

            Assert(current != nullptr);
        }
        else if (*current != '\0')
        {
            cmd_start = current;

            current += std::strcspn(current, " \t");
        }
        else
        {
            break;
        }

        if (*current)
        {
            *current++ = '\0';
        }

        Assert(argc < 128);
        Main_ArgV[argc++] = cmd_start;
    }

    Assert(argc < 128);
    Main_ArgV[argc] = nullptr;

    mem::cmd_param::init(argc, Main_ArgV);

    Application(argc, Main_ArgV);

    // Timer::Sleep(500);

    return 0;
}

define_dummy_symbol(midtown);

run_once([] {
#ifdef USE_SDL2
    auto_hook(0x401030, CreatePipeline);
#endif
});

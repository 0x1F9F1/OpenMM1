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
    mmcityinfo:state

    0x4C0040 | public: virtual __thiscall mmPlayerData::~mmPlayerData(void) | ??1mmPlayerData@@UAE@XZ
    0x4C00E0 | public: virtual void * __thiscall mmPlayerData::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerData@@UAEPAXI@Z
    0x5943F0 | const mmPlayerData::`vftable' | ??_7mmPlayerData@@6B@
    0x668390 | struct mmStatePack MMSTATE | ?MMSTATE@@3UmmStatePack@@A
    0x668688 | int CHEATING | ?CHEATING@@3HA
    0x668690 | class mmPlayerData MMCURRPLAYER | ?MMCURRPLAYER@@3VmmPlayerData@@A
    0x66A808 | int CHICAGO | ?CHICAGO@@3HA
*/

// 0x668390 | ?MMSTATE@@3UmmStatePack@@A
inline extern_var(0x668390, struct mmStatePack, MMSTATE);

// 0x668688 | ?CHEATING@@3HA
inline extern_var(0x668688, int32_t, CHEATING);

// 0x668690 | ?MMCURRPLAYER@@3VmmPlayerData@@A
inline extern_var(0x668690, class mmPlayerData, MMCURRPLAYER);

// 0x66A808 | ?CHICAGO@@3HA
inline extern_var(0x66A808, int32_t, CHICAGO);

struct mmStatePack
{
    int32_t CurrentCar;
    int32_t field_4;
    int32_t ControllerType;
    int32_t NetworkStatus;
    int32_t NumPlayers;
    int32_t field_14;
    int32_t CopBehaviorFlag;
    int32_t field_1C;
    int32_t field_20;
    int32_t Closing;
    int32_t field_28;
    int32_t GameMode;
    int32_t EventId;
    float Difficulty;
    int32_t AutoTransmission;
    int32_t field_3C;
    int32_t field_40;
    int32_t field_44;
    float AmbientDensity;
    float PedDensity;
    float NumCops;
    float MaxOpponents;
    float PhysicsRealism;
    int32_t EnableFF;
    int32_t DisableCustomEvents;
    int32_t Weather;
    int32_t TimeOfDay;
    char CarName[80];
    int32_t CurrentColor;
    char NetName[80];
    float TimeLimit;
    int32_t InGame;
    int32_t DisableDamage;
    int32_t DisableAI;
    int32_t DisablePerpEscape;
    int16_t AmbientCount;
    int16_t field_126;
    int32_t NumLaps;
    int32_t ProfessionalMode;
    float WaveVolume;
    float AudBalance;
    float CDVolume;
    int32_t AudFlags;
    int16_t AudNumChannels;
    int16_t field_142;
    int32_t field_144;
    int32_t field_148;
    int32_t field_14C;
    int32_t field_150;
    int16_t field_154;
    char AudDeviceName[200];
    char EnableCDPlayer;
    char field_21F;
    int32_t IsCop;
    int32_t CREnableTimer;
    int32_t IsRobber;
    float CRTimeLimit;
    int32_t CRTimeLimit2;
    int32_t CRGoldMass;
    int32_t field_238;
    int32_t field_23C;
    char IntroText[160];
    char CameraIndex;
    char HasHudmap;
    char WideView;
    char DashView;
    char EnableMirror;
    char ExternalView;
    char XcamView;
    char IconsState;
    char MapRes;
    char field_2E9;
    char field_2EA;
    char field_2EB;
    int32_t DisablePeds;
    int32_t SpeedLoading;
    uint32_t Interlaced;
};

check_size(mmStatePack, 0x2F8);

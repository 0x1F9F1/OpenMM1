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

// mmaudio:mmvoicecommentary

#include "hooking.h"

class mmVoiceCommentary
{
public:
    // 0x4DD2C0 | ??0mmVoiceCommentary@@QAE@XZ
    inline mmVoiceCommentary()
    {
        stub<member_func_t<void, mmVoiceCommentary>>(0x4DD2C0, this);
    }

    // 0x4DD360 | ??1mmVoiceCommentary@@QAE@XZ
    inline ~mmVoiceCommentary()
    {
        stub<member_func_t<void, mmVoiceCommentary>>(0x4DD360, this);
    }

    // 0x4DD380 | ?ValidateCity@mmVoiceCommentary@@QAEXPAD@Z
    inline void ValidateCity(char* arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, char*>>(0x4DD380, this, arg1);
    }

    // 0x4DD3C0 | ?SetFrequency@mmVoiceCommentary@@QAEXM@Z
    inline void SetFrequency(float arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, float>>(0x4DD3C0, this, arg1);
    }

    // 0x4DD3E0 | ?Stop@mmVoiceCommentary@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD3E0, this);
    }

    // 0x4DD3F0 | ?StopNow@mmVoiceCommentary@@QAEXXZ
    inline void StopNow()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD3F0, this);
    }

    // 0x4DD440 | ?PlayAirBorne@mmVoiceCommentary@@QAEXXZ
    inline void PlayAirBorne()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD440, this);
    }

    // 0x4DD4B0 | ?PlayRoam@mmVoiceCommentary@@QAEXXZ
    inline void PlayRoam()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD4B0, this);
    }

    // 0x4DD520 | ?PlayCheckPoint@mmVoiceCommentary@@QAEXXZ
    inline void PlayCheckPoint()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD520, this);
    }

    // 0x4DD570 | ?PlayFinalCheckPoint@mmVoiceCommentary@@QAEXXZ
    inline void PlayFinalCheckPoint()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD570, this);
    }

    // 0x4DD5E0 | ?PlayLap@mmVoiceCommentary@@QAEXF@Z
    inline void PlayLap(int16_t arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, int16_t>>(0x4DD5E0, this, arg1);
    }

    // 0x4DD5F0 | ?PlayFinalLap@mmVoiceCommentary@@QAEXXZ
    inline void PlayFinalLap()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD5F0, this);
    }

    // 0x4DD660 | ?Play@mmVoiceCommentary@@QAEXPAD@Z
    inline void Play(char* arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, char*>>(0x4DD660, this, arg1);
    }

    // 0x4DD6B0 | ?PlayPreRace@mmVoiceCommentary@@QAEXXZ
    inline void PlayPreRace()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DD6B0, this);
    }

    // 0x4DD720 | ?GetRandomPreRace@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomPreRace()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DD720, this);
    }

    // 0x4DD8A0 | ?GetRandomPreBlitz@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomPreBlitz()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DD8A0, this);
    }

    // 0x4DD980 | ?GetRandomPreCircuit@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomPreCircuit()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DD980, this);
    }

    // 0x4DDA60 | ?GetRandomPreCheckPoint@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomPreCheckPoint()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DDA60, this);
    }

    // 0x4DDB70 | ?PlayWinResults@mmVoiceCommentary@@QAEXXZ
    inline void PlayWinResults()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DDB70, this);
    }

    // 0x4DDBE0 | ?PlayMidResults@mmVoiceCommentary@@QAEXXZ
    inline void PlayMidResults()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DDBE0, this);
    }

    // 0x4DDC50 | ?PlayResults@mmVoiceCommentary@@QAEXF@Z
    inline void PlayResults(int16_t arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, int16_t>>(0x4DDC50, this, arg1);
    }

    // 0x4DDCC0 | ?GetRandomResults@mmVoiceCommentary@@QAEPADF@Z
    inline char* GetRandomResults(int16_t arg1)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, int16_t>>(0x4DDCC0, this, arg1);
    }

    // 0x4DDDA0 | ?GetRandomPreRaceVeh@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomPreRaceVeh()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DDDA0, this);
    }

    // 0x4DDE00 | ?GetRandomResultsWin@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomResultsWin()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DDE00, this);
    }

    // 0x4DDFA0 | ?GetRandomResultsPoor@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomResultsPoor()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DDFA0, this);
    }

    // 0x4DE140 | ?GetRandomResultsMid@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomResultsMid()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DE140, this);
    }

    // 0x4DE2E0 | ?GetRandomTOD@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomTOD()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DE2E0, this);
    }

    // 0x4DE340 | ?GetRandomWeather@mmVoiceCommentary@@QAEPADXZ
    inline char* GetRandomWeather()
    {
        return stub<member_func_t<char*, mmVoiceCommentary>>(0x4DE340, this);
    }

    // 0x4DE3E0 | ?CatName@mmVoiceCommentary@@QAEPADPADHH@Z
    inline char* CatName(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, char*, int32_t, int32_t>>(0x4DE3E0, this, arg1, arg2, arg3);
    }

    // 0x4DE5E0 | ?GetLapName@mmVoiceCommentary@@QAEPADF@Z
    inline char* GetLapName(int16_t arg1)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, int16_t>>(0x4DE5E0, this, arg1);
    }

    // 0x4DE6A0 | ?PlayNetworkPreRace@mmVoiceCommentary@@QAEXXZ
    inline void PlayNetworkPreRace()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DE6A0, this);
    }

    // 0x4DE710 | ?PlayCRPreRace@mmVoiceCommentary@@QAEXXZ
    inline void PlayCRPreRace()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DE710, this);
    }

    // 0x4DE810 | ?PlayCollision@mmVoiceCommentary@@QAEXXZ
    inline void PlayCollision()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DE810, this);
    }

    // 0x4DE880 | ?PlayCR@mmVoiceCommentary@@QAEXFF@Z
    inline void PlayCR(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmVoiceCommentary, int16_t, int16_t>>(0x4DE880, this, arg1, arg2);
    }

    // 0x4DE910 | ?PlayTeamCR@mmVoiceCommentary@@QAEXFF@Z
    inline void PlayTeamCR(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmVoiceCommentary, int16_t, int16_t>>(0x4DE910, this, arg1, arg2);
    }

    // 0x4DE980 | ?GetRandomRobber@mmVoiceCommentary@@QAEPADF@Z
    inline char* GetRandomRobber(int16_t arg1)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, int16_t>>(0x4DE980, this, arg1);
    }

    // 0x4DEA00 | ?GetRandomRedCR@mmVoiceCommentary@@QAEPADF@Z
    inline char* GetRandomRedCR(int16_t arg1)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, int16_t>>(0x4DEA00, this, arg1);
    }

    // 0x4DEA80 | ?GetRandomBlueCR@mmVoiceCommentary@@QAEPADF@Z
    inline char* GetRandomBlueCR(int16_t arg1)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, int16_t>>(0x4DEA80, this, arg1);
    }

    // 0x4DEB00 | ?GetRandomCop@mmVoiceCommentary@@QAEPADF@Z
    inline char* GetRandomCop(int16_t arg1)
    {
        return stub<member_func_t<char*, mmVoiceCommentary, int16_t>>(0x4DEB00, this, arg1);
    }

    // 0x4DEB80 | ?PlayOpponentFinish@mmVoiceCommentary@@QAEXF@Z
    inline void PlayOpponentFinish(int16_t arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, int16_t>>(0x4DEB80, this, arg1);
    }

    // 0x4DECE0 | ?PlayTimePenalty@mmVoiceCommentary@@QAEXXZ
    inline void PlayTimePenalty()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DECE0, this);
    }

    // 0x4DEDB0 | ?PlayEndRaceDamage@mmVoiceCommentary@@QAEXXZ
    inline void PlayEndRaceDamage()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DEDB0, this);
    }

    // 0x4DEE20 | ?PlayUnlock@mmVoiceCommentary@@QAEXH@Z
    inline void PlayUnlock(int32_t arg1)
    {
        return stub<member_func_t<void, mmVoiceCommentary, int32_t>>(0x4DEE20, this, arg1);
    }

    // 0x4DEE90 | ?PlayGTUnlocked@mmVoiceCommentary@@QAEXXZ
    inline void PlayGTUnlocked()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DEE90, this);
    }

    // 0x4DEEF0 | ?PlayBusUnlocked@mmVoiceCommentary@@QAEXXZ
    inline void PlayBusUnlocked()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DEEF0, this);
    }

    // 0x4DEF50 | ?PlayCopCarUnlocked@mmVoiceCommentary@@QAEXXZ
    inline void PlayCopCarUnlocked()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DEF50, this);
    }

    // 0x4DEFC0 | ?PlayBulletUnlocked@mmVoiceCommentary@@QAEXXZ
    inline void PlayBulletUnlocked()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DEFC0, this);
    }

    // 0x4DF020 | ?PlaySemiUnlocked@mmVoiceCommentary@@QAEXXZ
    inline void PlaySemiUnlocked()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DF020, this);
    }

    // 0x4DF080 | ?PlayNextRacesUnlocked@mmVoiceCommentary@@QAEXXZ
    inline void PlayNextRacesUnlocked()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DF080, this);
    }

    // 0x4DF150 | ?Update@mmVoiceCommentary@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmVoiceCommentary>>(0x4DF150, this);
    }
};

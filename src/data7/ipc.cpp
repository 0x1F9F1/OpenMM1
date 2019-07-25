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

#include "ipc.h"

uint32_t __stdcall ipcMessageQueue::Proc(void* param)
{
    return static_cast<ipcMessageQueue*>(param)->MessageLoop();
}

int32_t ipcMessageQueue::MessageLoop()
{
    while (m_Initialized)
    {
        ipcWaitSingle(m_SendEvent);

        while (true)
        {
            ipcWaitSingle(m_hMutex);

            if (m_SendIndex == m_ReadIndex)
            {
                break;
            }

            if (++m_ReadIndex == m_nMaxMessages)
            {
                m_ReadIndex = 0;
            }

            ipcMessage message = m_pMessages[m_ReadIndex];

            ipcReleaseMutex(m_hMutex);
            message.m_pCallback(message.m_pCallback);
            ipcTriggerEvent(m_WaitEvent);
        }

        ipcReleaseMutex(m_hMutex);
    }

    return 0;
}

void ipcMessageQueue::Init(int32_t capacity, bool32_t blocking)
{
    if (SynchronousMessageQueues)
    {
        return;
    }

    if (m_Initialized)
    {
        Quitf("ipcMessageQueue::Init - didn't Shutdown first?");
    }

    m_ReadIndex = 0;
    m_SendIndex = 0;

    if (blocking)
    {
        capacity = 2;
    }

    m_nMaxMessages = capacity;
    m_Blocking = blocking;
    m_pMessages.Reset(new ipcMessage[capacity]);
    m_SendEvent = ipcCreateEvent(0);
    m_WaitEvent = ipcCreateEvent(0);
    m_hMutex = ipcCreateMutex(0);
    m_Initialized = 1;

    uint32_t thread_id = 0;
    m_hQueueThread = ipcCreateThread(ipcMessageQueue::Proc, this, &thread_id);
}

void ipcMessageQueue::Shutdown()
{
    if (SynchronousMessageQueues)
    {
        return;
    }

    m_Initialized = 0;

    ipcTriggerEvent(m_SendEvent);

    ipcWaitSingle(m_hQueueThread);
    ipcCloseHandle(m_hQueueThread);
    ipcCloseHandle(m_SendEvent);
    ipcCloseHandle(m_WaitEvent);
    ipcCloseHandle(m_hMutex);
}
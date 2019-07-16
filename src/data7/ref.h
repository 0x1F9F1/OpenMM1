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

template <typename T>
class Ref
{
    T* m_Value {nullptr};

public:
    Ref() noexcept = default;
    Ref(T* value);

    Ref(const Ref<T>& other);
    Ref(Ref<T>&& other) noexcept;

    ~Ref();

    Ref<T>& operator=(const Ref<T>& other);
    Ref<T>& operator=(Ref<T>&& other);

    T* Release();

    void Reset(T* value = nullptr);

    T* Get() noexcept;
    const T* Get() const noexcept;

    T* operator->() noexcept;
    const T* operator->() const noexcept;

    T& operator*() noexcept;
    const T& operator*() const noexcept;

    operator bool() const noexcept;
};

template <typename T>
inline Ref<T>::Ref(T* value)
    : m_Value(value)
{}

template <typename T>
inline Ref<T>::Ref(const Ref<T>& other)
    : m_Value(other)
{
    m_Value->AddRef();
}

template <typename T>
inline Ref<T>::Ref(Ref<T>&& other) noexcept
    : m_Value(other.m_Value)
{
    other.m_Value = nullptr;
}

template <typename T>
inline Ref<T>::~Ref()
{
    if (m_Value)
    {
        m_Value->Release();
    }
}

template <typename T>
inline Ref<T>& Ref<T>::operator=(const Ref<T>& other)
{
    if (m_Value)
    {
        m_Value->Release();
    }

    m_Value = other.m_Value;

    m_Value->AddRef();

    return *this;
}

template <typename T>
inline Ref<T>& Ref<T>::operator=(Ref<T>&& other)
{
    if (m_Value)
    {
        m_Value->Release();
    }

    m_Value = other.m_Value;
    other.m_Value = nullptr;

    return *this;
}

template <typename T>
inline T* Ref<T>::Release()
{
    T* result = m_Value;
    m_Value = nullptr;
    return result;
}

template <typename T>
inline void Ref<T>::Reset(T* value)
{
    if (m_Value)
    {
        m_Value->Release();
    }

    m_Value = value;

    if (m_Value)
    {
        m_Value->AddRef();
    }
}

template <typename T>
inline T* Ref<T>::Get() noexcept
{
    return m_Value;
}

template <typename T>
inline const T* Ref<T>::Get() const noexcept
{
    return m_Value;
}

template <typename T>
inline T* Ref<T>::operator->() noexcept
{
    return m_Value;
}

template <typename T>
inline const T* Ref<T>::operator->() const noexcept
{
    return m_Value;
}

template <typename T>
inline T& Ref<T>::operator*() noexcept
{
    return *m_Value;
}

template <typename T>
inline const T& Ref<T>::operator*() const noexcept
{
    return *m_Value;
}

template <typename T>
inline Ref<T>::operator bool() const noexcept
{
    return m_Value != nullptr;
}

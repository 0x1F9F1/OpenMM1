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
    constexpr Ref() noexcept = default;
    constexpr explicit Ref(T* value) noexcept;

    constexpr Ref(const Ref<T>& other);
    constexpr Ref(Ref<T>&& other) noexcept;

    ~Ref();

    constexpr Ref<T>& operator=(const Ref<T>& other);
    constexpr Ref<T>& operator=(Ref<T>&& other);

    [[nodiscard]] constexpr T* Release();

    constexpr void Reset(T* value = nullptr);

    constexpr T* Get() noexcept;
    constexpr const T* Get() const noexcept;

    constexpr T* operator->() noexcept;
    constexpr const T* operator->() const noexcept;

    constexpr T& operator*() noexcept;
    constexpr const T& operator*() const noexcept;

    constexpr operator bool() const noexcept;
};

template <typename T>
inline constexpr Ref<T>::Ref(T* value) noexcept
    : m_Value(value)
{}

template <typename T>
inline constexpr Ref<T>::Ref(const Ref<T>& other)
    : m_Value(other.m_Value)
{
    m_Value->AddRef();
}

template <typename T>
inline constexpr Ref<T>::Ref(Ref<T>&& other) noexcept
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
inline constexpr Ref<T>& Ref<T>::operator=(const Ref<T>& other)
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
inline constexpr Ref<T>& Ref<T>::operator=(Ref<T>&& other)
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
inline constexpr T* Ref<T>::Release()
{
    T* result = m_Value;
    m_Value = nullptr;
    return result;
}

template <typename T>
inline constexpr void Ref<T>::Reset(T* value)
{
    if (m_Value)
    {
        m_Value->Release();
    }

    m_Value = value;
}

template <typename T>
inline constexpr T* Ref<T>::Get() noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr const T* Ref<T>::Get() const noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr T* Ref<T>::operator->() noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr const T* Ref<T>::operator->() const noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr T& Ref<T>::operator*() noexcept
{
    return *m_Value;
}

template <typename T>
inline constexpr const T& Ref<T>::operator*() const noexcept
{
    return *m_Value;
}

template <typename T>
inline constexpr Ref<T>::operator bool() const noexcept
{
    return m_Value != nullptr;
}

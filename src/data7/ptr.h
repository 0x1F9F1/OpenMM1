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
class Ptr
{
private:
    T* m_Value {nullptr};

public:
    constexpr Ptr() noexcept = default;
    constexpr explicit Ptr(T* value) noexcept;

    constexpr Ptr(const Ptr<T>&) noexcept = delete;
    constexpr Ptr(Ptr<T>&& other) noexcept;

    ~Ptr();

    constexpr Ptr<T>& operator=(const Ptr<T>&) = delete;
    constexpr Ptr<T>& operator=(Ptr<T>&& other);

    [[nodiscard]] constexpr T* Release() noexcept;

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
class Ptr<T[]>
{
private:
    T* m_Value {nullptr};

public:
    constexpr Ptr() noexcept = default;
    constexpr explicit Ptr(T* value) noexcept;

    constexpr Ptr(const Ptr<T[]>&) noexcept = delete;
    constexpr Ptr(Ptr<T[]>&& other) noexcept;

    ~Ptr();

    constexpr Ptr<T[]>& operator=(const Ptr<T[]>&) = delete;
    constexpr Ptr<T[]>& operator=(Ptr<T[]>&& other);

    [[nodiscard]] constexpr T* Release() noexcept;

    constexpr void Reset(T* value = nullptr);

    constexpr T* Get() noexcept;
    constexpr const T* Get() const noexcept;

    constexpr T& operator[](size_t index) noexcept;
    constexpr const T& operator[](size_t index) const noexcept;

    constexpr operator bool() const noexcept;
};

template <typename T>
inline constexpr Ptr<T>::Ptr(T* value) noexcept
    : m_Value(value)
{}

template <typename T>
inline constexpr Ptr<T>::Ptr(Ptr<T>&& other) noexcept
    : m_Value(other.m_Value)
{
    other.m_Value = nullptr;
}

template <typename T>
inline Ptr<T>::~Ptr()
{
    delete m_Value;
}

template <typename T>
inline constexpr Ptr<T>& Ptr<T>::operator=(Ptr<T>&& other)
{
    delete m_Value;
    m_Value = other.m_Value;
    other.m_Value = nullptr;

    return *this;
}

template <typename T>
inline constexpr T* Ptr<T>::Release() noexcept
{
    T* result = m_Value;
    m_Value = nullptr;
    return result;
}

template <typename T>
inline constexpr void Ptr<T>::Reset(T* value)
{
    delete m_Value;
    m_Value = value;
}

template <typename T>
inline constexpr T* Ptr<T>::Get() noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr const T* Ptr<T>::Get() const noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr T* Ptr<T>::operator->() noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr const T* Ptr<T>::operator->() const noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr T& Ptr<T>::operator*() noexcept
{
    return *m_Value;
}

template <typename T>
inline constexpr const T& Ptr<T>::operator*() const noexcept
{
    return *m_Value;
}

template <typename T>
inline constexpr Ptr<T>::operator bool() const noexcept
{
    return m_Value != nullptr;
}

template <typename T>
inline constexpr Ptr<T[]>::Ptr(T* value) noexcept
    : m_Value(value)
{}

template <typename T>
inline constexpr Ptr<T[]>::Ptr(Ptr<T[]>&& other) noexcept
    : m_Value(other.m_Value)
{
    other.m_Value = nullptr;
}

template <typename T>
inline Ptr<T[]>::~Ptr()
{
    delete[] m_Value;
}

template <typename T>
inline constexpr Ptr<T[]>& Ptr<T[]>::operator=(Ptr<T[]>&& other)
{
    delete[] m_Value;

    m_Value = other.m_Value;
    other.m_Value = nullptr;

    return *this;
}

template <typename T>
inline constexpr T* Ptr<T[]>::Release() noexcept
{
    T* result = m_Value;
    m_Value = nullptr;
    return result;
}

template <typename T>
inline constexpr void Ptr<T[]>::Reset(T* value)
{
    delete[] m_Value;
    m_Value = value;
}

template <typename T>
inline constexpr T* Ptr<T[]>::Get() noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr const T* Ptr<T[]>::Get() const noexcept
{
    return m_Value;
}

template <typename T>
inline constexpr T& Ptr<T[]>::operator[](size_t index) noexcept
{
    return m_Value[index];
}

template <typename T>
inline constexpr const T& Ptr<T[]>::operator[](size_t index) const noexcept
{
    return m_Value[index];
}

template <typename T>
inline constexpr Ptr<T[]>::operator bool() const noexcept
{
    return m_Value != nullptr;
}

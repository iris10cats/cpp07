#pragma once

template <typename T, typename Func>
void iter(T* array, unsigned int length, Func func)
{
    for (unsigned int i = 0; i < length; ++i)
        func(array[i]);
}

template <typename T>
void printElement(const T& element)
{
    std::cout << element;
}

template <typename T>
void incrementElement(T& element)
{
    ++element;
}




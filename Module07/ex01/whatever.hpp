#pragma once

#include <iostream>


template<typename aT, typename lT>
void iter(aT *arr, lT len, void(*func)(aT))
{
    for (lT i = 0; i < len; i++)
        func(arr[i]);
}
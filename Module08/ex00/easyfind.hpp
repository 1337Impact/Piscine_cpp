#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>


class NotFoundException : public std::exception
{
    public:
        const char *what() const throw(){
            return "Exception: Not Found!";
        }
};

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it = container.begin();
    for (; it != container.end(); it++)
        if (*it == n)
            return it;
    throw NotFoundException();
}

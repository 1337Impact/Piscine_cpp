#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>


template <typename T>
void easyfind(T value, int n)
{
    class NotFoundException : public std::exception
    {
        public:
            const char *what() const throw(){
                return "Exception: Not Found!";
            }
    };
    for (std::vector<int>::iterator it = value.begin(); it != value.end(); it++)
    {
        if (*it == n){
            return ;
        }
    }
    throw NotFoundException();
}

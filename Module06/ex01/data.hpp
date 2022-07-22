#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

typedef struct
{
    std::string firstName;
    std::string lastName;
    int         age;
} Data;


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
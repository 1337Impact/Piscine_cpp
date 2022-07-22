#pragma once
#include <iostream>
#include <string>

class   Base
{
public:
    virtual ~Base(){};
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#include "./headers/A.hpp"
#include "./headers/B.hpp"
#include "./headers/C.hpp"
#include <cstdlib>

Base * generate(void)
{
    Base *out;

    srand(time(0));
    int i =  (rand() % 3);
    switch (i)
    {
    case 0:
        out = new A();
        break;
    case 1:
        out = new B();
        break;
    case 2:
        out = new C();
        break;
    }
    return out;
}

void identify(Base* p)
{
    std::cout << "Pointer Identity: ";
    if (dynamic_cast<A*>(p)){
        std::cout << 'A' << std::endl;
        return;
    }
    if (dynamic_cast<B*>(p)){
        std::cout << 'B' << std::endl;
        return;
    }
    if (dynamic_cast<C*>(p)){
        std::cout << 'C' << std::endl;
        return;
    }
    std::cout << "NULL" << std::endl;
}

void identify(Base& p)
{
    std::cout << "Reference Identity: ";
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << 'A' << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << 'B' << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << 'C' << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
    }
    std::cout << "NULL" << std::endl;
}
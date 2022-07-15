#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << &str << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;

    std::cout << str << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
}
Makefile main.cpp Weapon.hpp Weapon.cpp HumanA.hpp HumanA.cpp HumanB.hpp HumanB.cpp
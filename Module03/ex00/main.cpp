#include "ClapTrap.hpp"

int main(){
    ClapTrap obj1("mohammed");
    ClapTrap obj2(obj1);

    obj1.attack("someone");
    obj2.attack("anotherone");
    obj1.takeDamage(10);
    obj1.beRepaired(10);
    obj1.takeDamage(10);
    obj2.takeDamage(10);
}
#include "ScarvTrap.hpp"

int main(){
    ScarvTrap obj1("mohammed");

    obj1.attack("someone");
    obj1.takeDamage(10);
    obj1.takeDamage(100);
    obj1.takeDamage(1);
    obj1.beRepaired(100);
    obj1.takeDamage(1);
    obj1.attack("another one");
}
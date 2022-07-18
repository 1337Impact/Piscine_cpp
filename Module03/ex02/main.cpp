#include "FragTrap.hpp"
#include "ScarvTrap.hpp"

int main(){
    FragTrap obj1("Mohammed");
    FragTrap obj2("Serena");

    obj1.attack("someone");
    obj2.attack("Mohammed");
    obj1.takeDamage(30);
    obj2.beRepaired(30);
}
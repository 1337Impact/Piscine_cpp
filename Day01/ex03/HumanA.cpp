#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& obj)
    : _name(name), _weapon(obj)
{
}

void    HumanA::attack(void){
    std::string w = _weapon.getType();
    std::cout << _name << " attacks with their " << w << std::endl;
}

HumanA::~HumanA(){

}
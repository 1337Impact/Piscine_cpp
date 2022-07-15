#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : _name(name)
{
}

HumanB::~HumanB(){

}

void    HumanB::setWeapon(Weapon &obj)
{
    _weapon = &obj;
}

void    HumanB::attack(void){
    if (_weapon){
        std::string w = _weapon->getType();
        std::cout << _name << " attacks with their " << w << std::endl;
    }
    else
        std::cout << _name << " is not armed" << std::endl;
}
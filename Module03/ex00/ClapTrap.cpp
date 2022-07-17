#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
: _name(name), _hitPoint(10), _energy(10), _damage(0)
{
    std::cout << "constacted called with name: " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destacted called!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << _name 
            << " attacks " << target 
            << ", causing" << _damage
            << " points of damage!" << std::endl;
    _energy --;
}
void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << _name 
            << "has taken" << amount
            << " points of damage!" << std::endl;
    if (amount > _hitPoint){
        _hitPoint = 0;
    }
    _hitPoint -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
    _hitPoint += amount;
    _energy --;
}
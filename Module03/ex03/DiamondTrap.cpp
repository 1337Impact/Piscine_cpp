#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap(){
//     std::cout << "DiamondTrap default constractor called" << std::endl;
// }

// DiamondTrap::DiamondTrap( const std::string & name)
// : _name(name)
// {
//     std::cout << "DiamondTrap constractor called" << std::endl;
//     ClapTrap::_name = name + "_clap_name";
//     _hitPoint = FragTrap::_hitPoint;
//     _energy = ScarvTrap::_energy;
//     _damage = FragTrap::_damage;
// }

// DiamondTrap::~DiamondTrap(){
    
// }

// void    DiamondTrap::attack(const std::string& target){
//     ScarvTrap::attack(target);
// }

// void    DiamondTrap::whoAmI(){
//     std::cout << "DiamondTrap name is: " << _name
//             << ", ClapTrap name is: " << ClapTrap::_name
//             << std::endl;
// }
DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap default constractor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string & name)
{
    (void)name;
    std::cout << "DiamondTrap constractor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
    
}

void    DiamondTrap::attack(const std::string& target){
    (void)target;
    std::cout << "attack called" << std::endl;
}

void    DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name is: " << std::endl;
}
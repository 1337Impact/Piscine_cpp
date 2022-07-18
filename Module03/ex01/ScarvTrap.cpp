#include "ScarvTrap.hpp"

ScarvTrap::ScarvTrap( const std::string & name)
{
    std::cout << "ScarvTrap constractor called with name: "
            << name << std::endl;
    _name = name;
    _hitPoint = 100;
    _energy = 50;
    _damage = 20;
}

ScarvTrap::ScarvTrap( const ScarvTrap & obj)
: ClapTrap(obj)
{
}

ScarvTrap::~ScarvTrap(){
    std::cout << "ScarvTrap destractor called!" << std::endl; 
}

ScarvTrap & ScarvTrap::operator = ( const ScarvTrap & obj ){
    this->_name = obj._name;
    this->_hitPoint = obj._hitPoint;
    this->_energy = obj._energy;
    this->_damage = obj._damage;
    return *this;
}

void ScarvTrap::attack(const std::string& target){
	if (_energy){
		std::cout << "ScarvTrap " << _name 
				<< " attacks " << target 
				<< ", causing " << _damage
				<< " points of damage!" << std::endl;
		_energy --;
	}
	else{
		std::cout << "ClapTrap " << _name 
				<< " has no energy left to attack " << target
				<< std::endl;
	}
}

void ScarvTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
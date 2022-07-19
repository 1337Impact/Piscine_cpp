#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constractor called!" << std::endl;
	_name = "defualt";
	_hitPoint = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap( const std::string & name)
:ClapTrap(name)
{
	std::cout << "ScavTrap constractor called with name: "
			<< name << std::endl;
	_name = name;
	_hitPoint = 100;
	_energy = 50;
	_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & obj)
: ClapTrap(obj)
{
	std::cout << "ScavTrap copy constractor called!" << std::endl; 
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destractor called!" << std::endl; 
}

ScavTrap & ScavTrap::operator = ( const ScavTrap & obj ){
	ClapTrap::operator=(obj);
	std::cout << "ScavTrap copy assignment called!" << std::endl; 
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (_energy){
		std::cout << "ScavTrap " << _name 
				<< " attacks " << target 
				<< ", causing " << this->_damage
				<< " points of damage!" << std::endl;
		_energy --;
	}
	else{
		std::cout << "ClapTrap " << _name 
				<< " has no energy left to attack " << target
				<< std::endl;
	}
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
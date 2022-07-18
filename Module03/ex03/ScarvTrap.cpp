#include "ScarvTrap.hpp"

ScarvTrap::ScarvTrap(){
	std::cout << "ScarvTrap default constractor called!" << std::endl;
}

ScarvTrap::ScarvTrap( const std::string & name)
:ClapTrap(name)
{
	std::cout << "ScarvTrap constractor called with name: "
			<< name << std::endl;
	_name = name;
	_hitPoint = 100;
	_energy = 100;
	_damage = 30;
}

ScarvTrap::ScarvTrap( const ScarvTrap & obj)
: ClapTrap(obj)
{
	std::cout << "ScarvTrap copy constractor called!" << std::endl; 
}

ScarvTrap::~ScarvTrap(){
	std::cout << "ScarvTrap destractor called!" << std::endl; 
}

ScarvTrap & ScarvTrap::operator = ( const ScarvTrap & obj ){
	ClapTrap::operator=(obj);
	std::cout << "ScarvTrap copy assignment called!" << std::endl; 
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
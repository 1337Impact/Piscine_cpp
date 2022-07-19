#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
:ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "DiamondTrap default constractor called" << std::endl;
	FragTrap::_hitPoint = 100;
	ScavTrap::_energy = 50;
	FragTrap::_damage = 30;
}

DiamondTrap::DiamondTrap( const std::string & name)
: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap constractor called with: " << name << std::endl;
	FragTrap::_hitPoint = 100;
	ScavTrap::_energy = 50;
	FragTrap::_damage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap & obj)
:ClapTrap(obj), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
}

DiamondTrap & DiamondTrap::operator = ( const DiamondTrap & obj){
	ClapTrap::operator=(obj);
	ScavTrap();
	FragTrap();
	std::cout << "DiamondTrap asignment operator called!" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "deconstactor called!" << std::endl;
}

void	DiamondTrap::attack( const std::string & target){
	ScavTrap::_name = _name;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << ", ClapTrap name is: " << this->ClapTrap::_name
			<< "DiamondTrap name is: " << this->_name
			<< std::endl;
}
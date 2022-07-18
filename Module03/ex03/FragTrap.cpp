#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap default constractor called!" << std::endl;
}

FragTrap::FragTrap( const std::string & name)
:ClapTrap(name)
{
	std::cout << "FragTrap constractor called with name: "
			<< name << std::endl;
	_name = name;
	_hitPoint = 100;
	_energy = 100;
	_damage = 30;
}

FragTrap::FragTrap( const FragTrap & obj)
: ClapTrap(obj)
{
	std::cout << "FragTrap copy constractor called!" << std::endl; 
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destractor called!" << std::endl; 
}

FragTrap & FragTrap::operator = ( const FragTrap & obj ){
	ClapTrap::operator=(obj);
	std::cout << "FragTrap copy assignment operator called!" << std::endl; 
	return *this;
}

void FragTrap::highFivesGuys( void ){
	std::cout << "High Five everyone!" << std::endl;
}
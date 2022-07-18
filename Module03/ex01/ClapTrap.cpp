#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constractor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
: _name(name), _hitPoint(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constacter called with name: " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & obj )
: _name(obj._name), _hitPoint(obj._hitPoint), _energy(obj._energy), _damage(obj._damage)
{
	std::cout << "ClapTrap copy constacter called with name: " << obj._name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destacter called!" << std::endl;
}

ClapTrap	& ClapTrap::operator = ( const ClapTrap & obj){
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_damage = obj._damage;
	this->_energy = obj._energy;
	std::cout << "ClapTrap copy assignment operator called!" << std::endl;
	return *this;
}



void ClapTrap::attack(const std::string& target){
	if (_energy){
		std::cout << "ClapTrap " << _name 
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
void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoint){
		std::cout << "ClapTrap " << _name 
				<< " has taken " << amount
				<< " points of damage!" << std::endl;
		if ((int)amount > _hitPoint)
			_hitPoint = 0;
		else
			_hitPoint -= amount;
	}
	else{
		std::cout << "ClapTrap " << _name 
				<< " has lost all HP!" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	if (_energy){
		std::cout << "ClapTrap " << _name 
				<< " Repaired him self" << std::endl;
		_hitPoint += amount;
		_energy --;
	}
	else{
		std::cout << "ClapTrap " << _name
				<< " has no energy left to repaire him self!" << std::endl;
	}
}
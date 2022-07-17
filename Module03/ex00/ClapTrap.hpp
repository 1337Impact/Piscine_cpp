#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;
	int _hitPoint;
	int _energy;
	int _damage;
public:
	ClapTrap(std::string name);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap()
{
}

ClapTrap::~ClapTrap()
{
}


#endif
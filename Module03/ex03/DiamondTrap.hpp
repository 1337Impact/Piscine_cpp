#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap( const std::string & name);
        DiamondTrap( const DiamondTrap & obj);

        DiamondTrap & operator = ( const DiamondTrap & obj);

        ~DiamondTrap();

        void attack(const std::string & name);
        void whoAmI();
};

#endif
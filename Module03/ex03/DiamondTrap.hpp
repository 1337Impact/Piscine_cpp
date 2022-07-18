#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.cpp"
#include "ScarvTrap.cpp"

class DiamondTrap : public FragTrap, public ScarvTrap
{
    private:
    public:
        DiamondTrap(){
            std::cout << "wtf";
        }
        ~DiamondTrap(){
            std::cout << "wtf again";
        }
};

#endif
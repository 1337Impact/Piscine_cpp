#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.cpp"
#include "ScarvTrap.cpp"

class DiamondTrap : public FragTrap, public ScarvTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap( const std::string & name);
        DiamondTrap( const DiamondTrap & obj);
        DiamondTrap & operator = ( const DiamondTrap & obj);
        ~DiamondTrap();

        void    attack(const std::string& target);
        void    whoAmI();
};

#endif
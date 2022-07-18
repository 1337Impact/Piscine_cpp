#ifndef SCARVTRAP_HPP
#define SCARVTRAP_HPP

#include "ClapTrap.hpp"

class ScarvTrap : public ClapTrap
{
    public:
        ScarvTrap( const std::string & name);
        ScarvTrap( const ScarvTrap & obj);
        ScarvTrap & operator = (const ScarvTrap & obj);
        ~ScarvTrap();

        void    attack( const std::string & obj);
        void    guardGate();
};


#endif
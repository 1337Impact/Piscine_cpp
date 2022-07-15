#include "Zombie.hpp"

Zombie::Zombie(){
}

void    Zombie::setName(std::string name){
    this->name = name;
}

Zombie::Zombie(std::string name){
    this->name = name;
}

void    Zombie::announce(void){
    std::cout << name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << name << " died" << std::endl;
}
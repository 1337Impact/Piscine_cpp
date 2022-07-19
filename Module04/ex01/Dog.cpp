#include "Dog.hpp"

Dog::Dog()
:Animal("Dog")
{
    std::cout << "Dog constractor called!" << std::endl;
    _BObj = new Brain();
}

Dog::Dog( const Dog & obj){
    this->_type = obj._type;
    std::cout << "Dog Copy Constractor called!" << std::endl;
}

Dog & Dog::operator = ( const Dog & obj){
    this->_type = obj._type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog deconstractor called!" << std::endl;
    delete _BObj;
}
#include "WrongCat.hpp"

WrongCat::WrongCat()
:WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constractor called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & obj){
    this->_type = obj._type;
    std::cout << "WrongCat Copy Constractor called!" << std::endl;
}

WrongCat & WrongCat::operator = ( const WrongCat & obj){
    this->_type = obj._type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat deconstractor called!" << std::endl;
}
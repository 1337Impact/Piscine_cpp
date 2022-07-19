#include "Animal.hpp"

Animal::Animal( const std::string & type)
: _type(type)
{
    std::cout << "Animal Constractor called!" << std::endl;
}

Animal::Animal()
: _type("Animal")
{
    std::cout << "Animal Constractor called!" << std::endl;
}

Animal::Animal( const Animal & obj )
: _type(obj._type)
{
    std::cout << "Animal Copy Constractor called!" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal deconstractor called!" << std::endl;
}

Animal & Animal::operator = ( const Animal & obj){
    this->_type = obj._type;
    return *this;
}

std::string Animal::getType( void ) const {
    return _type;
}

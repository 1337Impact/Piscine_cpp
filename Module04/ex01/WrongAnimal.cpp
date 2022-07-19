#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( const std::string & type)
: _type(type)
{
    std::cout << "WrongAnimal Constractor called!" << std::endl;
}

WrongAnimal::WrongAnimal()
:_type("WrongAnimal")
{
    std::cout << "WrongAnimal Constractor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & obj )
: _type(obj._type)
{
    std::cout << "WrongAnimal Copy Constractor called!" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal deconstractor called!" << std::endl;
}

WrongAnimal & WrongAnimal::operator = ( const WrongAnimal & obj){
    this->_type = obj._type;
    return *this;
}

std::string WrongAnimal::getType( void ) const {
    return _type;
}

void    WrongAnimal::makeSound() const{
    if (_type == "WrongCat"){
        std::cout << "bark bark" << std::endl;
    }
    else{
        std::cout << "not WrongAnimal sound" << std::endl;
    }
}
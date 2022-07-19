#include "Cat.hpp"

Cat::Cat()
:Animal("Cat")
{
    std::cout << "Cat constractor called!" << std::endl;
    _BObj = new Brain();
}

Cat::Cat( const Cat & obj){
    this->_type = obj._type;
    std::cout << "Cat Copy Constractor called!" << std::endl;
}

Cat & Cat::operator = ( const Cat & obj){
    this->_type = obj._type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat deconstractor called!" << std::endl;
    delete _BObj;
}
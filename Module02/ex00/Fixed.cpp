#include "Fixed.hpp"

Fixed::Fixed()
: value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &obj)
: value(obj.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &obj){
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void    Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
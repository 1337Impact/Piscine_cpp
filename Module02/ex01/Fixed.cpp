#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed( const int num ){
    std::cout << "Int constructor called" << std::endl;
    value = num << fracbit;
}

Fixed::Fixed( const float num ){
    std::cout << "Float constructor called" << std::endl;
    value = int(roundf(num * (1 << fracbit)));
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
	return this->value;
}

void    Fixed::setRawBits( int const raw ){
	this->value = raw;
}

float	Fixed::toFloat( void ) const{
    return float(value) / (1 << fracbit);
}
int		Fixed::toInt( void ) const{
    return value >> fracbit;
}

std::ostream& operator << (std::ostream& oso, const Fixed& fixed){
    oso << fixed.toFloat();
    return oso;
}

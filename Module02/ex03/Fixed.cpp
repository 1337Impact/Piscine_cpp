#include "Fixed.hpp"
#include <cmath>

/************* constarctor/destractor **********/
Fixed::Fixed()
: value(0)
{
}

Fixed::Fixed( const Fixed &obj)
: value(obj.value)
{
}

Fixed::Fixed( const int num ){
    value = num << fracbit;
}

Fixed::Fixed( const float num ){
    value = int(roundf(num * (1 << fracbit)));
}

Fixed::~Fixed()
{
}


/*************** operators ***************/
Fixed & Fixed::operator = (const Fixed &obj){
	this->value = obj.getRawBits();
	return *this;
}

// comparison operators
bool    Fixed::operator > (const Fixed &obj){
    return this->value > obj.value;
}
bool    Fixed::operator < (const Fixed &obj){
    return this->value < obj.value;
}
bool    Fixed::operator >= (const Fixed &obj){
    return this->value >= obj.value;
}
bool    Fixed::operator <= (const Fixed &obj){
    return this->value <= obj.value;
}
bool    Fixed::operator == (const Fixed &obj){
    return this->value == obj.value;
}
bool    Fixed::operator != (const Fixed &obj){
    return this->value != obj.value;
}

// arithemetic operators
Fixed	Fixed::operator + (const Fixed &obj){
    Fixed   out;
    out.setRawBits(this->value + obj.value);
    return out;
}
Fixed	Fixed::operator - (const Fixed &obj){
    Fixed   out;
    out.setRawBits(this->value - obj.value);
    return out;
}
Fixed	Fixed::operator * (const Fixed &obj){
    Fixed   out;
    out.setRawBits((this->value * obj.value) >> fracbit);
    return out;
}
Fixed	Fixed::operator / (const Fixed &obj){
    Fixed   out;
    out.setRawBits((this->value  << fracbit) / obj.value);
    return out;
}
// increment/decrement
Fixed	Fixed::operator ++ (int){ // i++
    Fixed   out;
    out.setRawBits(this->value++);
    return out;
}
Fixed &	Fixed::operator ++ (){ // ++i
    ++this->value;
    return *this;
}
Fixed	Fixed::operator -- (int){ // i--
    Fixed   out;
    out.setRawBits(this->value--);
    return out;
}
Fixed &	Fixed::operator -- (){ // --i
    --this->value;
    return *this;
}

// min/max
Fixed & Fixed::min( Fixed &num1, Fixed &num2 ){
    if (num1 < num2)
        return num1;
    return num2;
}
Fixed	Fixed::min( const Fixed &num1, const Fixed &num2 ){
    Fixed out;
    if (num1.value < num2.value)
        out =  num1;
    else
        out = num2;
    return out;
}
Fixed & Fixed::max( Fixed &num1, Fixed &num2 ){
        if (num1 > num2)
        return num1;
    return num2;
}
Fixed	Fixed::max( const Fixed &num1, const Fixed &num2 ){
    Fixed out;
    if (num1.value > num2.value)
        out =  num1;
    else
        out = num2;
    return out;
}

//**************** geter/seter ***************/
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

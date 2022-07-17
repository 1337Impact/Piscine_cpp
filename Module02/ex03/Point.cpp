#include "Point.hpp"

Point::Point( void )
: _x(0), _y(0)
{
}

Point::Point(const Fixed x, const Fixed y)
: _x(x), _y(y)
{
}

Point::Point(const Point & obj)
: _x(obj._x), _y(obj._y)
{
}

Point & Point::operator = (const Point & obj)
{
    (Fixed)_x = obj._x;
    (Fixed)_y = obj._y;
    return *this;
}

Point::~Point()
{
}

Fixed const Point::get_x( void ){
    return this->_x;
}

Fixed const Point::get_y( void ){
    return this->_y;
}

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;
public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point & obj);
    Point & operator = (const Point & obj);
    ~Point();

    Fixed const  get_x( void );
    Fixed const  get_y( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
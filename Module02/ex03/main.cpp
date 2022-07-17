#include <iostream>
#include "Point.hpp"
#include <iostream>
int main( void ) {
    Point   a(Fixed(1), Fixed(1));
    Point   b(Fixed(1), Fixed(4));
    Point   c(Fixed(4), Fixed(1));
    Point   point(Fixed(5), Fixed(5));
    std::cout << bsp(a, b, c, point);
return 0;
}
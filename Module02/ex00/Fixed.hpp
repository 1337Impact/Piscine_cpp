#include <iostream>

class Fixed
{
private:
	int                 value;
	static const int    fracbit = 8;
public:
	Fixed();
	Fixed (const Fixed &obj);
	~Fixed();
	Fixed & operator = (const Fixed &obj);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

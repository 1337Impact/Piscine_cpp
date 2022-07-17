#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int                 value;
	static const int    fracbit = 8;
public:
	Fixed();
	Fixed( const int num );
	Fixed( const float num );
	Fixed (const Fixed &obj);
	~Fixed();

	Fixed & operator = (const Fixed &obj);
	// comparison operators
	bool	operator > (const Fixed &obj);
	bool	operator < (const Fixed &obj);
	bool	operator >= (const Fixed &obj);
	bool	operator <= (const Fixed &obj);
	bool	operator == (const Fixed &obj);
	bool	operator != (const Fixed &obj);

	// arithemetic operators
	Fixed	operator + (const Fixed &obj);
	Fixed	operator - (const Fixed &obj);
	Fixed	operator * (const Fixed &obj);
	Fixed	operator / (const Fixed &obj);

	// increment/decrement
	Fixed	operator ++ (int);
	Fixed &	operator ++ ();
	Fixed	operator -- (int);
	Fixed &	operator -- ();

	// min / max
	static	Fixed & min( Fixed &num1, Fixed &num2 );
	static	Fixed	min( const Fixed &num1, const Fixed &num2 );
	static	Fixed & max( Fixed &num1, Fixed &num2 );
	static	Fixed	max( const Fixed &num1, const Fixed &num2 );

	//geter/seter
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator << (std::ostream& oso, const Fixed& fixed);

#endif
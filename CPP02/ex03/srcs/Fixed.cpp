#include "Fixed.hpp"

/* Constructors and Destructor */
Fixed::Fixed(void): rawVal(0) {}

Fixed::Fixed(const int i): rawVal(i << this->fracBits ) {}
 
Fixed::Fixed(const float f): rawVal(roundf(f * (1 << this->fracBits))) {}

Fixed::Fixed(Fixed const& src) { *this = src; return ; }

Fixed::~Fixed(void) {}

/* Bits functions */
Fixed&	Fixed::operator=(Fixed const &rhs)
{
	this->rawVal = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)	const { return (this->rawVal); }

void	Fixed::setRawBits(int const raw) { this->rawVal = raw; }

float	Fixed::toFloat( void ) const { return (this->rawVal / (float)(1 << this->fracBits)); }

int		Fixed::toInt( void ) const { return (this->rawVal >> this->fracBits); }

/* member operator functions */

bool	Fixed::operator>( Fixed const &rhs ) const
{
	return ( this->rawVal > rhs.rawVal );
}

bool	Fixed::operator<( Fixed const &rhs ) const
{
	return ( rhs.rawVal > this->rawVal );
}

bool	Fixed::operator>=( Fixed const &rhs ) const
{
	return ( this->rawVal >= rhs.rawVal );
}

bool	Fixed::operator<=( Fixed const &rhs ) const
{
	return ( rhs.rawVal >= this->rawVal );
}

bool	Fixed::operator==( Fixed const &rhs ) const
{
	return this->rawVal == rhs.rawVal;
}

bool	Fixed::operator!=( Fixed const &rhs ) const
{
	return this->rawVal != rhs.rawVal;
}

Fixed	Fixed::operator+( Fixed const &rhs ) const
{
	return this->rawVal + rhs.rawVal;
}

Fixed	Fixed::operator+( void ) const
{
	return *this;
}

Fixed	Fixed::operator-( Fixed const &rhs ) const
{
	Fixed	ret;

	ret.setRawBits(this->rawVal - rhs.rawVal);
	return ret;
}

Fixed	Fixed::operator-( void ) const
{
	return this->rawVal * -1;
}

Fixed	Fixed::operator*( Fixed const &rhs ) const
{
	int	result;
	Fixed 	ret;

	result = ((signed long long)this->rawVal * (signed long long)rhs.rawVal >> this->fracBits);
	ret.setRawBits(result);
	return ret;
}

Fixed	Fixed::operator/( Fixed const &rhs ) const
{
	return this->rawVal / rhs.rawVal;
}

Fixed	Fixed::operator++( void )
{
	Fixed	temp;
	
	temp.rawVal = ++rawVal;
	return temp;
}

Fixed&	Fixed::operator++( int )
{
	this->rawVal++;
	return *this;
}

Fixed	Fixed::operator--( void )
{
	Fixed	temp;
	
	temp.rawVal = --rawVal;
	return temp;
}

Fixed&	Fixed::operator--( int )
{
	this->rawVal--;
	return *this;
}

Fixed&	Fixed::min(Fixed& fp1, Fixed& fp2)
{
	return (fp1 < fp2 ? fp1 : fp2);
}

const Fixed&	Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
	return (fp1 < fp2 ? fp1 : fp2);
}

Fixed&	Fixed::max(Fixed& fp1, Fixed& fp2)
{
	return (fp1 > fp2 ? fp1 : fp2);
}
const Fixed&	Fixed::max(const Fixed& fp1, const Fixed& fp2)
{
	return (fp1 > fp2 ? fp1 : fp2);
}

/* external operator functions */
std::ostream&	operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}



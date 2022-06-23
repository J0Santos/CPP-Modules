#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//LOG("Default constructor called");
	this->rawVal = 0;
}

Fixed::Fixed(const int i): rawVal(i << this->fracBits ) 
{
	//LOG("Int constructor called");
}

Fixed::Fixed(const float f): rawVal(roundf(f * (1 << this->fracBits)))
{
	LOG("Float constructor called");
}

Fixed::Fixed(Fixed const& src)
{
	//LOG("Copy constructor called");
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	//LOG("Destructor called");
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	//LOG("Copy assignment operator called");
	this->rawVal = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)	const
{
	//LOG("getRawBits member function called");
	return (this->rawVal);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawVal = raw;
}

float	Fixed::toFloat( void ) const
{
	return (this->rawVal / (float)(1 << this->fracBits));
}

int		Fixed::toInt( void ) const
{
	return (this->rawVal >> this->fracBits);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

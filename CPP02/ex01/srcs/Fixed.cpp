#include "Fixed.hpp"

Fixed::Fixed(void)
{
	LOG("Default constructor called");
	this->fixedPoint = 0;
}

Fixed::Fixed(const int i)
{
	
}

Fixed::Fixed(const float f)
{

}

Fixed::Fixed(Fixed const& src)
{
	LOG("Copy constructor called");
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	LOG("Destructor called");
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	LOG("Copy assignment operator called");
	this->fixedPoint = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)	const
{
	LOG("getRawBits member function called");
	return (this->fixedPoint);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return o;
}

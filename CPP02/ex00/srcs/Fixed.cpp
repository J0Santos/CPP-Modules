#include "Fixed.hpp"

Fixed::Fixed(void)
{
	LOG("Default constructor called");
	this->fixedPoint = 0;
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

void	Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), _sound("Woof woof")
{
	LOG("Dog appeared");
}

Dog::Dog( Dog const& src )
{
	*this = src;
}

Dog::~Dog( void )
{
	LOG("Dog disappeared");
}

Dog& Dog::operator=( Dog const& rhs )
{
	this->type = rhs.type;
	this->_sound = rhs._sound;
	return *this;
}

void	Dog::info( void )
{
	LOG("sound: " << _sound);
	LOG("type: " << type);
}

void	Dog::makeSound( void ) const
{
	LOG(this->_sound);
}
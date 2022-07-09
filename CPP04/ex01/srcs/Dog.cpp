#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), _sound("Woof woof")
{
	brain = new Brain();
	LOG("Dog appeared");
}

Dog::Dog( Dog const& src)
{
	*this = src;
}

Dog::~Dog( void )
{
	delete brain;
	LOG("Dog dead");
}

Dog& Dog::operator=( Dog const& rhs )
{
	this->type = rhs.type;
	this->_sound = rhs._sound;
	this->brain = rhs.brain;
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
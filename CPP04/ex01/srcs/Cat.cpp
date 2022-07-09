#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"), _sound("Miau")
{
	brain = new Brain();
}

Cat::Cat( Cat const& src)
{
	*this = src;
}

Cat::~Cat( void )
{
	delete brain;
}

Cat& Cat::operator=( Cat const& rhs )
{
	this->type = rhs.type;
	this->_sound = rhs._sound;
	this->brain = rhs.brain;
	return *this;
}

void	Cat::info( void )
{
	LOG("_sound: " << _sound);
	LOG("type: " << type);
}

void	Cat::makeSound( void ) const
{
	LOG(_sound);
}
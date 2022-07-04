#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"), _sound("Miau")
{
}

Cat::Cat( Cat const& src)
{
	*this = src;
}

Cat::~Cat( void )
{

}

Cat& Cat::operator=( Cat const& rhs )
{
	this->type = rhs.type;
	this->_sound = rhs._sound;
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
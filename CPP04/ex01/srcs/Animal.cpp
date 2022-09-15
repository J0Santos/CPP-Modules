#include "Animal.hpp"

Animal::Animal( void )
{
	LOG("Animal default created");
}

Animal::Animal( std::string type ): type(type)
{
	LOG("Animal parameterized created");
}

Animal::Animal( Animal const& src )
{
	*this = src;
}

Animal::~Animal( void )
{
	LOG("Animal dead");
}

Animal&	Animal::operator=( Animal const& rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::setType( std::string new_type)
{
	this->type = new_type;
}

void	Animal::makeSound( void ) const
{
	LOG("Creepy noise");
}
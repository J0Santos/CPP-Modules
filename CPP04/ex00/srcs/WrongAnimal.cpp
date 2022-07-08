#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	LOG("Wrong animal created");
}

WrongAnimal::WrongAnimal( std::string type ): type(type)
{
}

WrongAnimal::WrongAnimal( WrongAnimal const& src )
{
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	LOG("WrongAnimal dead");
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const& rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::setType( std::string new_type)
{
	this->type = new_type;
}

void	WrongAnimal::makeSound( void ) const
{
	LOG("Im an animal, for real, im not an intergalatic species or anything...I swear");
}
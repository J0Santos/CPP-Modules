#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat"), _sound("I want lasagna!")
{
	LOG("Wrong cat appeared");
}

WrongCat::WrongCat( WrongCat const& src)
{
	*this = src;
}

WrongCat::~WrongCat( void )
{

}

WrongCat& WrongCat::operator=( WrongCat const& rhs )
{
	this->type = rhs.type;
	this->_sound = rhs._sound;
	return *this;
}

void	WrongCat::info( void )
{
	LOG("_sound: " << _sound);
	LOG("type: " << type);
}

void	WrongCat::makeSound( void ) const
{
	LOG(_sound);
}
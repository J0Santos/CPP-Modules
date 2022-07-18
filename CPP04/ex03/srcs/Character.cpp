#include "Character.hpp"

Character::Character( void )
{
}

Character::Character( std::string name ): _name(name)
{
}

Character::Character( Character const& src )
{
	*this = src;
}

Character::~Character( void )
{
}

Character&	Character::operator=( Character const& rhs )
{
	this->_name = rhs._name;
	return (*this);
}

std::string const& Character::getName( void ) const
{
	return (this->_name);
}


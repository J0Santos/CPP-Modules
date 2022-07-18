#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
}

Ice::Ice( Ice const& src )
{
	*this = src;
}

Ice::~Ice( void )
{
}

Ice&	Ice::operator=( Ice const& rhs )
{
	this->type = rhs.type;
	return (*this);
}

void	Ice::use( ICharacter& target)
{
	LOG("* shoots an ice bolt at " << target << " *");
}

AMateria*	Ice::clone( void )  const
{
	AMateria *newInstance = new Ice();
	 
	return( newInstance );
}
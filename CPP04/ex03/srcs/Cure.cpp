#include "Cure.hpp"

Cure::Cure( void ): AMateria("Cure")
{
}

Cure::Cure( Cure const& src )
{
	*this = src;
}

Cure::~Cure( void )
{
}

Cure&	Cure::operator=( Cure const& rhs )
{
	this->type = rhs.type;
	return (*this);
}

void	Cure::use( ICharacter& target)
{
	LOG("* heals " << target << "'s wounds *");
}

AMateria*	Cure::clone( void )  const
{
	AMateria *newInstance = new Cure();
	 
	return( newInstance );
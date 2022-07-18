#include "AMateria.hpp"

AMateria::AMateria( void )
{
}

AMateria::AMateria( std::string const& type ): type(type)
{

}

AMateria::AMateria( AMateria const& src )
{
	*this = src;
}

AMateria::~AMateria( void )
{
}

AMateria&	AMateria::operator=( AMateria const& rhs )
{
	this->type = rhs.type;
	return (*this);
}

void	AMateria::setType( std::string newType )
{
	this->type = newType;
}

void	AMateria::use( ICharacter& target )
{

}
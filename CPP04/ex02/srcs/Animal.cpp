#include "Animal.hpp"

AAnimal::AAnimal( void )
{
	LOG("Animal created");
}

AAnimal::AAnimal( std::string type ): type(type)
{
}

AAnimal::AAnimal( AAnimal const& src )
{
	*this = src;
}

AAnimal::~AAnimal( void )
{
	LOG("Animal dead");
}

AAnimal&	AAnimal::operator=( AAnimal const& rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string	AAnimal::getType( void ) const
{
	return (this->type);
}

void	AAnimal::setType( std::string new_type)
{
	this->type = new_type;
}

/* Even when implementing the function makeSound(), it wont be possible to instanciate the class */
// void	AAnimal::makeSound( void ) const
// {
// 	LOG("Creepy noise");
// }
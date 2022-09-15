#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), _sound("Woof woof")
{
	brain = new Brain();
	LOG("Dog appeared");
}

Dog::Dog( Dog const& src) : Animal("Dog"), _sound(src._sound)
{
	LOG("Dog appeared");
	this->brain = new Brain(*src.brain);
}

Dog::~Dog( void )
{
	delete brain;
	LOG("Dog dead");
}

Dog& Dog::operator=( Dog const& rhs )
{
	this->type = rhs.type;
	this->_sound = rhs._sound;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

void	Dog::info( void )
{
	LOG("sound: " << _sound);
	LOG("type: " << type);
}

void	Dog::makeSound( void ) const
{
	LOG(this->_sound);
}

void	Dog::getThought( void ) const
{
	LOG(brain->getIdeas());
}

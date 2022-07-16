#include "Brain.hpp"

Brain::Brain( void )
{
	LOG("Brain appeared");
	for (int i = 0; i < BRAIN_SIZE; i++)
	{
		std::string temp;
		temp = i;
		this->ideas[i] = "Idea " + temp;
	}
}

Brain::Brain( Brain const& src )
{
	*this = src;
}

Brain::~Brain( void )
{
	LOG("Brain dead");
}


Brain&	Brain::operator=( Brain const& rhs )
{
	for (int i = 0; i < BRAIN_SIZE; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas( void )
{
	return this->ideas;
}

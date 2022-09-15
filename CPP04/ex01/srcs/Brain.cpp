#include "Brain.hpp"

Brain::Brain( void )
{
	LOG("Brain appeared");
	for (int i = 0; i < BRAIN_SIZE; i++)
		this->ideas[i] = "Idea ";
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
	for (int i = 0; i < BRAIN_SIZE; i++)
		LOG(this->ideas[i] << " number " << i);
	return this->ideas;
}

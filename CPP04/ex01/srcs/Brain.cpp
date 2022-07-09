#include "Brain.hpp"

Brain::Brain( void )
{
}

Brain::Brain( Brain const& src )
{
	*this = src;
}

Brain::~Brain( void )
{
	delete []ideas;
}


Brain&	Brain::operator=( Brain const& rhs )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}


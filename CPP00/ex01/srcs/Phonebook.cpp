#include "Phonebook.hpp"

Phonebook::Phonebook(void) {

	std::cout << "Phonebook constructor called" << std::endl;
	this->index = 0;
	
	return ;
}

int	Phonebook::getIndex(void) {
	
	return index;
}

Phonebook::~Phonebook(void) {

	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

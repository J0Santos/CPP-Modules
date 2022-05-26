#include "Phonebook.hpp"

Phonebook::Phonebook(void) {

	std::cout << "Contructor called" << std::endl;
	this->index = 0;
	
	return ;
}

Phonebook::~Phonebook(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}
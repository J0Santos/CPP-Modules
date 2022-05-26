#include "Phonebook.hpp"

Phonebook::Phonebook(void) {

	std::cout << "Phonebook constructor called" << std::endl;
	this->index = 0;
	
	return ;
}

Phonebook::~Phonebook(void) {

	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

Contact Phonebook::AddContact(void)
{
	
}
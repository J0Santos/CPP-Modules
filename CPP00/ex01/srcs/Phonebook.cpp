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

Contact	Phonebook::getContact()
{
	return (this->contactList[this->index]);
}

int	Phonebook::getIndex(void)
{
	return (this->index);
}

void Phonebook::addContact(void)
{
	Contact	newContact;

	if (this->index >= MAX_SIZE)
		this->index = 0;
	newContact = this->getContact();
	newContact.setFirstName();
	newContact.setLastName();
	newContact.setNickname();
	newContact.setPhoneNum();
	newContact.setDarkSecret();
	this->index++;
}

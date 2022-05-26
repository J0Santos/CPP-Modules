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

Contact	*Phonebook::getContact()
{
	return (this->contactList[this->index]);
}

void	Phonebook::setIndex(int i)
{
	this->index = i;
}

int	Phonebook::getIndex(void)
{
	return (this->index);
}

void Phonebook::AddContact(void)
{
	Contact	*newContact;

	if (this->index >= MAX_SIZE)
		this->setIndex(0);
	newContact = this->getContact();
	newContact->setFirstName();
	newContact->setLastName();
	newContact->setNickname();
	newContact->setPhoneNum();
	newContact->setDarkSecret();
	this->index++;
}

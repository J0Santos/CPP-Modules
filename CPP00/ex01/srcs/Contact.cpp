#include "Phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}

/* First Name */
void	Contact::setFirstName(void)
{
	std::string	str;

	PRINT(YELLOW << "Insert First Name:" << RESET);
	std::getline(std::cin, this->firstName);
}

std::string	Contact::getFirstName(void)
{
	return (Contact::firstName);
}

/* Last Name */
void	Contact::setLastName(void)
{
	PRINT(YELLOW << "Insert Last Name:" << RESET);
	std::getline(std::cin, this->lastName);
}

std::string	Contact::getLastName(void)
{
	return (Contact::lastName);
}

/* Nickname */
void	Contact::setNickname(void)
{
	PRINT(YELLOW << "Insert Nickname:" << RESET);
	std::getline(std::cin, this->nickname);
}

std::string	Contact::getNickname(void)
{
	return (Contact::nickname);
}

/* Phone Number */
void	Contact::setPhoneNum(void)
{
	PRINT(YELLOW << "Insert Phone Number:" << RESET);
	std::cin >> this->phoneNumber;
	if (!this->phoneNumber)
	{
		std::cin.clear();
		std::cin.ignore(999, '\n');
		PRINT(RED << "Phone Number must be a number.\n" << RESET);
		this->setPhoneNum();
	}
}

int	Contact::getPhoneNum(void)
{
	return (Contact::phoneNumber);
}

/* Dark Secret */
void	Contact::setDarkSecret(void)
{
	PRINT(YELLOW << "Insert Dark Secret:" << RESET);
	std::cin.clear();
	std::cin.ignore(999, '\n');
	std::getline(std::cin, this->darkestSecret);
}

std::string	Contact::getDarkSecret(void)
{
	return (Contact::darkestSecret);
}

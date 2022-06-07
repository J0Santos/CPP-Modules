#include "Phonebook.hpp"

Contact::Contact(void)
{
	//std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destructor called" << std::endl;
}

/* First Name */
void	Contact::setFirstName(void)
{
	PRINT(YELLOW << "Insert First Name:" << RESET);
	std::getline(std::cin, firstName);
	while (firstName.empty())
	{
		PRINT(RED << "Obviously, this can't be empty...do you eat soup with a fork?") << RESET;
		PRINT(YELLOW << "Insert First Name:" << RESET);
		std::getline(std::cin, firstName);
	}
}

std::string	Contact::getFirstName(void)
{
	return (firstName);
}

/* Last Name */
void	Contact::setLastName(void)
{
	PRINT(YELLOW << "Insert Last Name:" << RESET);
	std::getline(std::cin, lastName);
	while (lastName.empty())
	{
		PRINT(RED << "Obviously, this can't be empty...do you eat soup with a fork?") << RESET;
		PRINT(YELLOW << "Insert Last Name:" << RESET);
		std::getline(std::cin, this->lastName);
	}
}

std::string	Contact::getLastName(void)
{
	return (lastName);
}

/* Nickname */
void	Contact::setNickname(void)
{
	PRINT(YELLOW << "Insert Nickname:" << RESET);
	std::getline(std::cin, nickname);
	while (nickname.empty())
	{
		PRINT(RED << "Obviously, this can't be empty...do you eat soup with a fork?") << RESET;
		PRINT(YELLOW << "Insert Nickname Name:" << RESET);
		std::getline(std::cin, nickname);
	}
}

std::string	Contact::getNickname(void)
{
	return (nickname);
}

/* Phone Number */
void	Contact::setPhoneNum(void)
{
	PRINT(YELLOW << "Insert Phone Number:" << RESET);
	std::getline(std::cin, phoneNumber);
	if (phoneNumber[0] == '-')
		PRINT(RED << "Tell me a country with negative phone numbers, just one...wise-ass...I dont even care anymore, saved!" << RESET);
	while (phoneNumber.empty())
	{
		PRINT(RED << "Obviously, this can't be empty...do you eat soup with a fork?") << RESET;
		PRINT(YELLOW << "Insert Phone Number:" << RESET);
		std::getline(std::cin, phoneNumber);
	}
}

std::string	Contact::getPhoneNum(void)
{
	return (phoneNumber);
}

/* Dark Secret */
void	Contact::setDarkSecret(void)
{
	PRINT(YELLOW << "Insert Dark Secret:" << RESET);
	std::getline(std::cin, darkestSecret);
	while (darkestSecret.empty())
	{
		PRINT(RED << "Obviously, this can't be empty...do you eat soup with a fork?") << RESET;
		PRINT(YELLOW << "Insert Dark Secret:" << RESET);
		std::getline(std::cin, darkestSecret);
	}
}

std::string	Contact::getDarkSecret(void)
{
	return (darkestSecret);
}

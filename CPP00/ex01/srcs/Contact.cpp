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
void	Contact::SetFirstName(void)
{
	std::string	str;

	PRINT(YELLOW << "Insert First Name:" << RESET);
	std::cin >> this->firstName;
}

std::string	Contact::GetFirstName(void)
{
	return (Contact::firstName);
}

/* Last Name */
void	Contact::SetLastName(void)
{
	PRINT(YELLOW << "Insert Last Name:" << RESET);
	std::cin >> this->lastName;
}

std::string	Contact::GetLastName(void)
{
	return (Contact::lastName);
}

/* Nickname */
void	Contact::SetNickname(void)
{
	PRINT(YELLOW << "Insert Nickname:" << RESET);
	std::cin >> this->nickname;
}

std::string	Contact::GetNickname(void)
{
	return (Contact::nickname);
}

/* Phone Number */
void	Contact::SetPhoneNum(void)
{
	PRINT(YELLOW << "Insert Phone Number:" << RESET);
	std::cin >> this->phoneNumber;
	while (!this->phoneNumber)
	{
		std::cin.clear();
		std::cin.ignore(999, '\n');
		PRINT(RED << "Phone Number must be a number.\nInsert it again:" << RESET);
		std::cin >> this->phoneNumber;
	}
}

int	Contact::GetPhoneNum(void)
{
	return (Contact::phoneNumber);
}

/* Dark Secret */
void	Contact::SetDarkSecret(void)
{
	PRINT(YELLOW << "Insert Dark Secret:" << RESET);
	std::cin >> this->darkestSecret;
}

std::string	Contact::GetDarkSecret(void)
{
	return (Contact::darkestSecret);
}

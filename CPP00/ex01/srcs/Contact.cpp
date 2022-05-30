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
	std::getline(std::cin, this->firstName);
	while (firstName.empty())
	{
		PRINT(RED << "Obviously, this can't be empty...do you eat soup with a fork?") << RESET;
		PRINT(YELLOW << "Insert First Name:" << RESET);
		std::getline(std::cin, this->firstName);
	}
}

std::string	Contact::getFirstName(void)
{
	return (Contact::firstName);
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
	return (Contact::lastName);
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
	return (Contact::nickname);
}

/* Phone Number */
void	Contact::setPhoneNum(void)
{
	size_t 		i;
	bool		num;
	bool		valid = false;
	std::string temp;

	while (valid == false)
	{
		PRINT(YELLOW << "Insert Phone Number:" << RESET);
		std::getline(std::cin, temp);
		if (temp.empty())
		{
			PRINT(RED << "Just give me a number...I'm tired\n" << RESET);
			continue ;
		}
		if (temp[0] == '-')
		{
			PRINT(RED << "You are the reason I had warnings implemented...Phone Numbers must be positive...\n" << RESET);
			continue ;
		}
		num = false;
		while (num == false)
		{
			for (i = 0; i < temp.length(); i++)
			{
				if (std::isdigit(temp[i]))
				{
					num = true;
					i++;
				}
				else
					num = false;
					break ;
			}
			PRINT(RED << "It must be a number...like...its literally in the name \"phone NUMBER\"\n" << RESET);
			break ;
		}
		if (num == false)
			continue ;
		phoneNumber = std::stoi(temp);
		valid = true;
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
	return (Contact::darkestSecret);
}

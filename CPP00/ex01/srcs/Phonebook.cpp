#include "Phonebook.hpp"

Phonebook::Phonebook(void) {

	std::cout << "Phonebook constructor called" << std::endl;
	index = 0;
	numContacts = 0;
	return ;
}

Phonebook::~Phonebook(void) {

	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

Contact	Phonebook::getContact()
{
	return (contactList[index]);
}

int	Phonebook::getIndex(void)
{
	return (this->index);
}

void Phonebook::addContact(void)
{
	if (index >= MAX_SIZE)
		index = 0;
	contactList[index].setFirstName();
	contactList[index].setLastName();
	contactList[index].setNickname();
	contactList[index].setPhoneNum();
	contactList[index].setDarkSecret();
	index++;
	if (numContacts < 8)
		numContacts++;
}

void	Phonebook::displayContact()
{
	int i = 0;
	std::string temp;

	std::cout.width(10);
	std::cout << std::right << "index" << "|";
	std::cout.width(10);
	std::cout << std::right << "First Name" << "|";
	std::cout.width(10);
	std::cout << std::right << "Last Name" << "|";
	std::cout.width(10);
	std::cout << std::right << "Nickname" << std::endl;
	while (i < this->index)
	{
		std::cout.width(10);
		std::cout << std::right << i << "|";
		temp = contactList[i].getFirstName();
		if (temp.size() >= 10)
		{
			temp.replace(9, 1, ".");
			temp.erase(10);
		}
		std::cout.width(10);
		std::cout << std::right << temp << "|";
		temp = contactList[i].getLastName();
		if (temp.size() >= 10)
		{
			temp.replace(9, 1, ".");
			temp.erase(10);
		}
		std::cout.width(10);
		std::cout << std::right << temp << "|";
		temp = contactList[i].getNickname();
		if (temp.size() >= 10)
		{
			temp.replace(9, 1, ".");
			temp.erase(10);
		}
		std::cout.width(10);
		std::cout << std::right << temp << std::endl;
		i++;
	}
}

void	Phonebook::displayContactInfo(int value)
{
	if (value > 7)
		PRINT(BLUE << "The Phonebook doesn't have more than 8 contacts..." << RESET);
	else if (value < 0)
		PRINT(BLUE << "Wow, soooo funny, ahah, negative indexes...grow up" << RESET);
	else if (value >= numContacts)
		PRINT(BLUE << "You have only added " << numContacts << " contacts...can't you count?" << RESET);
	else
	{
		PRINT(contactList[value].getFirstName());
		PRINT(contactList[value].getLastName());
		PRINT(contactList[value].getNickname());
		PRINT(contactList[value].getPhoneNum());
		PRINT(contactList[value].getDarkSecret());
	}
	std::cin.clear();
	std::cin.ignore(999, '\n');
}


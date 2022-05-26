#include "Phonebook.hpp"

Contact::Contact() {
	std::cout << "Constructor called" << std::endl;
	this->firstName = SetFirstName();
// 	this->lastName = SetLastName();
// 	this->nickname = SetNickname();
// 	this->phoneNumber = SetPhoneNum();
// 	this->darkestSecret = SetDarkSecret();
}

std::string	SetFirstName()
{
	std::string	name;

	LOG_OUT("Insert First Name");
	std::cin >> name;
	return (name); 

}
// void	SetLastName();
// void	SetNickname();
// void	SetPhoneNum();
// void	SetDarkSecret();

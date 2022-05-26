#ifndef CONTACT_HPP
# define CONTACT_HPP

# define LOG_OUT(x) std::cout << x << std::endl

# include <iostream>
# include <iomanip>

class Contact {

public:
	Contact();
	~Contact();
	std::string	SetFirstName();
	std::string	SetLastName();
	std::string	SetNickname();
	std::string	SetPhoneNum();
	std::string	SetDarkSecret();

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	std::string	test;

};

#endif /* CONTACT_HPP */
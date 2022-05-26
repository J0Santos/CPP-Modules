#ifndef CONTACT_HPP
# define CONTACT_HPP

# define LOG_OUT(x) std::cout << x << std::endl

# include <iostream>
# include <iomanip>

class Contact {

public:
	Contact();
	~Contact();
	void		SetFirstName();
	void		SetLastName();
	void		SetNickname();
	void		SetPhoneNum();
	void		SetDarkSecret();
	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickname();
	int			GetPhoneNum();
	std::string	GetDarkSecret();

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	int			phoneNumber;
	std::string	darkestSecret;
};

#endif /* CONTACT_HPP */

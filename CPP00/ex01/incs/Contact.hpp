#ifndef CONTACT_HPP
# define CONTACT_HPP

# define LOG_OUT(x) std::cout << x << std::endl

# include <iostream>
# include <iomanip>

class Contact {

public:
	Contact();
	~Contact();
	void		setFirstName();
	void		setLastName();
	void		setNickname();
	void		setPhoneNum();
	void		setDarkSecret();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNum();
	std::string	getDarkSecret();

private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		darkestSecret;
};

#endif /* CONTACT_HPP */

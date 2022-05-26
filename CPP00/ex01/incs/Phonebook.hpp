#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_SIZE 8

class Phonebook {

public:

	Phonebook();
	~Phonebook();

private:
	Contact	Contacts[MAX_SIZE];
	int		index;
};

#endif /* PHONEBOOK_HPP */

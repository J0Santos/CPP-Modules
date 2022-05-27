#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Colors.hpp"

# define PRINT(x) std::cout << x << std::endl
# define MAX_SIZE 8

class Phonebook {

public:

	Phonebook();
	~Phonebook();
	void	addContact();
	Contact	getContact();
	int		getIndex();
	void	displayContact();

private:
	Contact	contactList[MAX_SIZE];
	int		index;
	void	setIndex(int i);
};

#endif /* PHONEBOOK_HPP */

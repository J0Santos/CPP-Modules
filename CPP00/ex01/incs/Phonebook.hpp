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
	Contact	AddContact();

private:
	Contact	Contact[MAX_SIZE];
	int			index;
};

#endif /* PHONEBOOK_HPP */

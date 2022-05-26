#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define PRINT(x) std::cout << x << std::endl
# define MAX_SIZE 8

class Phonebook {

public:

	Phonebook();
	~Phonebook();
	int	getIndex();

private:
	Contact	Contact[MAX_SIZE];
	int			index;
};

#endif /* PHONEBOOK_HPP */

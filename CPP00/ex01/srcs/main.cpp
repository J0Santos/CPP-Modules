#include "Phonebook.hpp"

int	main(void) {

	Phonebook	Phonebook;
	std::string	command;

	while (1)
	{
		PRINT(BLUE << "Insert command:\n\n(ADD) a contact;\n(SEARCH) a contact;\n(EXIT) the program" << RESET);
		std::cin >> command;
		if (!command.compare("ADD"))
			Phonebook.addContact();
		else if (!command.compare("SEARCH"))
		{
			
		}
		else if (!command.compare("EXIT"))
		{
			PRINT(MAGENTA << "Pfff... okay then...BYE!!" << RESET);
			return (0);
		}
		else
			PRINT(RED << "Invalid command: " << command << "\n\nValid commands:\n\t-> ADD\n\t-> SEARCH\n\t-> EXIT" << RESET);
	}

	// PRINT(Phonebook.getIndex());
	// Contact.setFirstName();
	// Contact.setPhoneNum();
	// Contact.setNickname();
	// PRINT(Contact.getFirstName());
	// PRINT(Contact.getPhoneNum());
	// PRINT(Contact.getNickname());

	return (0);
}

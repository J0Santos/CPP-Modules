#include "Phonebook.hpp"

int	main(void) {

	Phonebook	Phonebook;
	std::string	command;
	int i;

	while (1)
	{
		PRINT(BLUE << "Insert command:\n\n(ADD) a contact;\n(SEARCH) a contact;\n(EXIT) the program" << RESET);
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			Phonebook.addContact();
		else if (!command.compare("SEARCH"))
		{
			Phonebook.displayContact();
			PRINT(BLUE << "Insert user index for more information" << RESET);
			std::cin >> i;
			while (!i)
			{
				std::cin.clear();
				std::cin.ignore(999, '\n');
				PRINT(RED << "Index must be a number, like, do I have to teach you everything?\n" << RESET);
				std::cin.clear();
				std::cin.ignore(999, '\n');
				std::cin >> i;
			}
			Phonebook.displayContactInfo(i);
		}
		else if (!command.compare("EXIT"))
		{
			PRINT(MAGENTA << "Pfff... okay then...BYE!!" << RESET);
			return (0);
		}
		else
			PRINT(RED << "LOL, Invalid command: " << command << "\n\nValid commands are:\n\t-> ADD\n\t-> SEARCH\n\t-> EXIT\n\n" << RESET);
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

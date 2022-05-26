#include "Phonebook.hpp"

int	main(void) {

	 Phonebook	Phonebook;
	// Contact	Contact;
	std::string	command;

	PRINT(BLUE << "Insert command:\n\n(ADD) a contact;\n(SEARCH) a contact;\n(EXIT) the program" << RESET);
	std::cin >> command;
	if (!command.compare("ADD"))
		Phonebook.AddContact();
	else if (!command.compare("SEARCH"))
	{
		PRINT("search");
	}
	else if (!command.compare("EXIT"))
	{
		PRINT("exit");
	}
	else
		PRINT(RED << "Invalid command: " << command << "\n\nValid commands:\n\t-> ADD\n\t-> SEARCH\n\t-> EXIT" << RESET);

	// PRINT(Phonebook.getIndex());
	// Contact.SetFirstName();
	// Contact.SetPhoneNum();
	// Contact.SetNickname();
	// PRINT(Contact.GetFirstName());
	// PRINT(Contact.GetPhoneNum());
	// PRINT(Contact.GetNickname());

	return (0);
}

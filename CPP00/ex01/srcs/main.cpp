#include "Phonebook.hpp"

int	main(void) {

	Phonebook	Phonebook;
	Contact	Contact;

	PRINT(Phonebook.getIndex());
	Contact.SetFirstName();
	Contact.SetPhoneNum();
	Contact.SetNickname();
	PRINT(Contact.GetFirstName());
	PRINT(Contact.GetPhoneNum());
	PRINT(Contact.GetNickname());

	return (0);
}

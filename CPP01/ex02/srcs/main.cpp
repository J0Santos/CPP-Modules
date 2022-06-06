#include <iostream>

#define LOG(x) std::cout << x << std::endl

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	LOG("Memory addresses:");
	LOG("\t brain: " << &brain);
	LOG("\t stringPTR: " << &stringPTR);
	LOG("\t stringREF: " << &stringREF);
	LOG("Values:");
	LOG("\t brain: " << brain);
	LOG("\t stringPTR: " << *stringPTR);
	LOG("\t stringREF: " << stringREF);
}

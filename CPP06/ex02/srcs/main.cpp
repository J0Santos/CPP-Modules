#include "functions.hpp"

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;
	Base* a = generate();
	LOG(CYAN << "Object created of type: " << a->getType() << RESET);
	LOG(YELLOW << "\nIdentification by pointer:" << RESET);
	identify(a);
	LOG(YELLOW << "\nIdentification by reference:" << RESET);
	identify(*a);
	delete a;
}
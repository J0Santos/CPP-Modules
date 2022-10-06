#include "MutantStack.hpp"

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;

	MutantStack<int>	myStack;

	myStack.push(5);
	myStack.push(17);

	LOG(BLUE << "Top of stack: " << RESET << myStack.top());
	LOG(BLUE << "Size of stack: " << RESET << myStack.size());

	myStack.push(3);
	myStack.push(5);
	myStack.push(737);
	myStack.push(0);

	MutantStack<int>::iterator it = myStack.begin();
	// MutantStack<int>::iterator ite = myStack.end();

	LOG(BLUE << "it begin: " << RESET << *it);
	// LOG(BLUE << "it end: " << RESET << *ite);

	// it++;
	// LOG(BLUE << "it: " << RESET << *it);
}
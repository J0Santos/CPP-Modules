#include "MutantStack.hpp"
#include <list>

#define LOG_S(x) std::cout << CYAN << x << RESET << std::endl

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;

	{
		LOG("TEST 1");
		MutantStack<int>	myStack;
		std::list<int>		list;
	
		myStack.push(5);
		myStack.push(17);
		myStack.push(3);
		myStack.push(14);
		myStack.push(737);
		myStack.push(0);
		list.push_front(5);
		list.push_front(17);
		list.push_front(3);
		list.push_front(14);
		list.push_front(737);
		list.push_front(0);

		LOG("Top of stack: " << myStack.top());
		LOG_S("Top of list: " << list.front());
		LOG("Size of stack: " << myStack.size());
		LOG_S("Size of list: " << list.size());

		LOG("");
		LOG("");
		MutantStack<int>::iterator	it = myStack.begin();
		MutantStack<int>::iterator	ite = myStack.end();
		LOG("it: " << *it);
		LOG("ite " << *ite);
		it++;
		LOG("it: " << *it);
		it--;
		LOG("it: " << *it);
	}
	{
		LOG("");
		LOG("");
		LOG("TEST 2");
		MutantStack<std::string>	myStack;
		std::list<std::string>		list;

		myStack.push("hello");
		myStack.push("test");
		myStack.push("third");
		myStack.push("forth");
		myStack.push("bajoras");
		myStack.push("zero");
		list.push_front("hello");
		list.push_front("test");
		list.push_front("third");
		list.push_front("forth");
		list.push_front("bajoras");
		list.push_front("zero");

		LOG("Top of stack: " << myStack.top());
		LOG_S("Top of list: " << list.front());
		LOG("Size of stack: " << myStack.size());
		LOG_S("Size of list: " << list.size());

		LOG("");
		LOG("");
		for (MutantStack<std::string>::iterator it = myStack.begin(); it != myStack.end(); it++) {
			LOG(*it);
		}
	}





}
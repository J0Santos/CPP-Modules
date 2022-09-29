#include "functions.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base*	generate(void) {
	srand(time(0));
	int random = rand() % 3;
	switch (random) {
		case 0:
			return (dynamic_cast<Base*>(new A));
			break ;
		case 1:
			return (dynamic_cast<Base*>(new B));
			break ;
		case 2:
			return (dynamic_cast<Base*>(new C));
			break ;
	}
	return (NULL);
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p) == NULL)
		if (dynamic_cast<B*>(p) == NULL)
			if (dynamic_cast<C*>(p) == NULL)
				LOG(RED << "Conversion is different from A, B and C types." << RESET);
			else
			{
				LOG(GREEN << "Type is C" << RESET);
				return ;
			}
		else
		{
			LOG(GREEN << "Type is B" << RESET);
			return ;
		}
	else
	{
		LOG(GREEN << "Type is A" << RESET);
		return ;
	}
}

void	identify(Base& p) {
	try {
		A&	aTest = dynamic_cast<A&>(p);
		(void)aTest;
		LOG(GREEN << "Type is A" << RESET);
		return ;
	}
	catch (std::exception &bc) {
		;
	}
	try {
		B&	bTest = dynamic_cast<B&>(p);
		(void)bTest;
		LOG(GREEN << "Type is B" << RESET);
		return ;
	}
	catch (std::exception &bc) {
		;
	}
	try {
		C&	cTest = dynamic_cast<C&>(p);
		(void)cTest;
		LOG(GREEN << "Type is C" << RESET);
		return ;
	}
	catch (std::exception &bc) {
		;
	}
}
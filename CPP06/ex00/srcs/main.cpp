#include <iostream>
#include <stdlib.h>
#include "ToInt.hpp"

#define LOG(x) std::cout << x << std::endl

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		LOG("Call program with one parameter only to convert");
		return 0;
	}
	std::string a(argv[1]);
	LOG(a);
	ToInt b(a);
}
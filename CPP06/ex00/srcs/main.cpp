#include <iostream>
#include <stdlib.h>

#define LOG(x) std::cout << x << std::endl

int	main(int argc, char **argv) {

	if (argc != 2)
		LOG("Call program with one parameter only to convert");
	int a = atoi(argv[1]);
	LOG(a);

	
}
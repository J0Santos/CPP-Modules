#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "ToInt.hpp"

#define LOG(x) std::cout << x << std::endl

enum type {
	INT = 1,
	CHAR = 2,
	FLOAT = 3,
	DOUBLE = 4,
};

int	parseVal(char *str)
{
	size_t i;
	for (i = 0; i < strlen(str); i++) {
		if (isdigit(str[i]) == 0 && i == 0)
			return (CHAR);
		else if (str[i] == '.')
			return (FLOAT);
	}
	return (INT);
}

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		LOG("Call program with one parameter only to convert");
		return 0;
	}
	int type = parseVal(argv[1]);
	LOG(type);
}
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Convert.hpp"

void	pseudoLiteralFloat(std::string s) {

	if (s.compare("nanf") == 0)
		LOG("Converted values are:\n\tchar-> impossible" << "\n\tint-> impossible"
			<< "\n\tfloat-> nanf" << "\n\tdouble-> nan");
	else if (s.compare("-inff") == 0)
		LOG("Converted values are:\n\tchar-> impossible" << "\n\tint-> impossible"
			<< "\n\tfloat-> -inff" << "\n\tdouble-> -inf");
	else if (s.compare("+inff") == 0 || s.compare("inf") == 0)
		LOG("Converted values are:\n\tchar-> impossible" << "\n\tint-> impossible"
			<< "\n\tfloat-> inff" << "\n\tdouble-> inf");
}

void	pseudoLiteralDouble(std::string s) {

	if (s.compare("nan") == 0)
		LOG("Converted values are:\n\tchar-> impossible" << "\n\tint-> impossible"
			<< "\n\tfloat-> nanf" << "\n\tdouble-> nan");
	else if (s.compare("-inf") == 0)
		LOG("Converted values are:\n\tchar-> impossible" << "\n\tint-> impossible"
			<< "\n\tfloat-> -inff" << "\n\tdouble-> -inf");
	else if (s.compare("+inf") == 0 || s.compare("inf") == 0)
		LOG("Converted values are:\n\tchar-> impossible" << "\n\tint-> impossible"
			<< "\n\tfloat-> inff" << "\n\tdouble-> inf");
}

void	convertChar(char *val) {

	char a = val[0];
	Convert	obj(a);
	LOG(obj);
}

void	convertInt(char* val) {
	int a = atoi(val);
	Convert obj(a);
	LOG(obj);
}

void	convertFloat(char* val) {
	float a = atof(val);
	Convert obj(a);
	LOG(obj);
}

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		LOG("Call program with one parameter only to convert");
		return 0;
	}
	int type = parseVal(argv[1]);
	LOG(type);
	if (type == CHAR)
		convertChar(argv[1]);
	else if (type == INT)
		convertInt(argv[1]);
	else if (type == FLOAT)
		convertFloat(argv[1]);
	// else
	// 	convertDecimalNum();
}
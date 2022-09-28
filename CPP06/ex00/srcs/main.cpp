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

int	parseVal(char *str) {
	std::string s(str);
	size_t i;

	/* Check pseudo literals */
	if (s.compare("-inff") == 0 || s.compare("+inff") == 0 || s.compare("inff") == 0
		|| s.compare("nanf") == 0)
		{
			pseudoLiteralFloat(s);
			return (0);
		}
	else if (s.compare("-inf") == 0 || s.compare("+inf") == 0 | s.compare("inf") == 0
		|| s.compare("nan") == 0)
		{
			pseudoLiteralDouble(s);
			return (0);
		}
	/* Check literals */
	for (i = 0; i < strlen(str); i++) {
		if ((str[i] == '+' || str[i] == '-') && i == 0)
			continue ;
		if (isdigit(str[i]) == 0 && i == 0 )
			return (CHAR);
	}
	for (i = 0; i < strlen(str); i++) {
		if (str[strlen(str) - 1] == 'f')
			return (FLOAT);
		else if (str[i] == '.')
			return (DOUBLE);
	}
	return (INT);
}

void	convertChar(char *val) {

	char a = val[0];
	Convert	obj(a);
}

void	convertInt(char* val) {
	int a = atoi(val);
	Convert obj(a);
}

void	convertFloat(char* val) {
	float a = atof(val);
	Convert obj(a);
}

void	convertDouble(char* val) {
	double a = atof(val);
	Convert obj(a);
}

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		LOG("Call program with one parameter only to convert");
		return 0;
	}
	int type = parseVal(argv[1]);
	switch (type) {
		case CHAR:
			convertChar(argv[1]);
			break ;
		case INT:
			convertInt(argv[1]);
			break ;
		case FLOAT:
			convertFloat(argv[1]);
			break ;
		case DOUBLE:
			convertDouble(argv[1]);
			break ;
	}
}
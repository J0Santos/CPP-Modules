#include "Convert.hpp"

Convert::Convert( void ) {
	LOG(RED << "WARNING: " << "with default constructor, all member variables are not initialized!" << RESET);
}

Convert::Convert(char* val) {
	this->type = this->parseVal(val);
}

Convert::Convert( char charToConvert ) {
	this->convertedChar = charToConvert;
	this->convertedInt = charToConvert - '0';
	this->convertedFloat = static_cast<float>(charToConvert) - '0';
	this->convertedDouble = static_cast<double>(charToConvert) - '0';
}

Convert::Convert( int intToConvert ) {
	this->convertedChar = intToConvert;
	this->convertedInt = intToConvert;
	this->convertedFloat = static_cast<float>(intToConvert);
	this->convertedDouble = static_cast<double>(intToConvert);
}

Convert::Convert( float floatToConvert ) {


	this->convertedChar = floatToConvert;
	this->convertedInt = static_cast<int>(floatToConvert);
	this->convertedFloat = floatToConvert;
	this->convertedDouble = static_cast<double>(floatToConvert);
}

Convert::Convert( Convert const& src ) {
	*this = src;
}

Convert::~Convert( void ) {
}

char	Convert::getConvertedChar() const {
		return (this->convertedChar);
}

int		Convert::getConvertedInt() const {
	return (this->convertedInt);
}

float	Convert::getConvertedFloat() const {
	return (this->convertedFloat);
}

double	Convert::getConvertedDouble() const {
	return (this->convertedDouble);
}

Convert&	Convert::operator=( Convert const& rhs ) {
	this->convertedChar = rhs.convertedChar;
	this->convertedInt = rhs.convertedInt;
	this->convertedFloat = rhs.convertedFloat;
	this->convertedDouble = rhs.convertedDouble;
	return (*this);
}

int	Convert::parseVal(char *str) {
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

void	Convert::displayValues(void) {
	LOG("Converted values are:");
	if (!isprint(this->getConvertedChar()))
		LOG("\tchar->Non displayable")
	else if ()
}

// std::ostream& operator<<(std::ostream& os, Convert const& obj ) {
// 	if (!isprint(obj.getConvertedChar()))
// 		os << "Converted values are:\n\tchar-> Non displayable"
// 		<< "\n\tint-> " << obj.getConvertedInt() << "\n\tfloat-> " << std::fixed << std::setprecision(1) <<
// 		obj.getConvertedFloat() << "f" << "\n\tdouble-> " << obj.getConvertedDouble();
// 	else
// 		os << "Converted values are:\n\tchar-> " << obj.getConvertedChar()
// 		<< "\n\tint-> " << obj.getConvertedInt() << "\n\tfloat-> " << std::fixed << std::setprecision(1) <<
// 		obj.getConvertedFloat() << "f" << "\n\tdouble-> " << obj.getConvertedDouble();
// 	return (os);
// }

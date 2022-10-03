#include "Convert.hpp"

Convert::Convert( void ) {
	LOG(RED << "WARNING: " << "with default constructor, all member variables are not initialized!" << RESET);
}

Convert::Convert( char charToConvert ) {
	this->convertedChar = charToConvert;
	this->convertedInt = charToConvert;
	this->convertedFloat = static_cast<float>(charToConvert);
	this->convertedDouble = static_cast<double>(charToConvert);
	displayChar(charToConvert);
}

Convert::Convert( int intToConvert ) {
	this->convertedChar = intToConvert;
	this->convertedInt = intToConvert;
	this->convertedFloat = static_cast<float>(intToConvert);
	this->convertedDouble = static_cast<double>(intToConvert);
	displayInt(intToConvert);
}

Convert::Convert( float floatToConvert ) {


	this->convertedChar = floatToConvert;
	this->convertedInt = static_cast<int>(floatToConvert);
	this->convertedFloat = floatToConvert;
	this->convertedDouble = static_cast<double>(floatToConvert);
	displayFloat(floatToConvert);
}

Convert::Convert( double doubleToConvert ) {


	this->convertedChar = doubleToConvert;
	this->convertedInt = static_cast<int>(doubleToConvert);
	this->convertedFloat = static_cast<double>(doubleToConvert);
	this->convertedDouble = doubleToConvert;
	displayDouble(doubleToConvert);
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

void	Convert::displayChar(char a) {
	LOG("Converted values are:");
	LOG("\tChar-> " << a);
	LOG("\tInt-> " << this->convertedInt);
	LOG("\tFloat-> " << std::fixed << std::setprecision(1) << this->convertedFloat << "f");
	LOG("\tDouble-> " << this->convertedDouble);
}

void	Convert::displayInt(int a) {
	LOG("Converted values are:");
	if (!isprint(this->getConvertedChar()))
		LOG("\tChar-> Non displayable");
	else if ( a > std::numeric_limits<char>::max() || a < std::numeric_limits<char>::min() )
		LOG("\tChar-> Impossible");
	else
		LOG("\tChar-> " << this->convertedChar);
	LOG("\tInt-> " << this->convertedInt);
	LOG("\tFloat-> " << std::fixed << std::setprecision(1) << this->convertedFloat << "f");
	LOG("\tDouble-> " << this->convertedDouble);
}

void	Convert::displayFloat(float a) {
	LOG("Converted values are:");
	if (!isprint(this->getConvertedChar()))
		LOG("\tChar-> Non displayable");
	else if ( a > std::numeric_limits<char>::max() || a < std::numeric_limits<char>::min() )
		LOG("\tChar-> Impossible");
	else
		LOG("\tChar-> " << this->convertedChar);
	if ( a > std::numeric_limits<int>::max() || a < std::numeric_limits<int>::min() )
		LOG("\tInt-> Impossible");
	else
		LOG("\tInt-> " << this->convertedInt);
	LOG("\tFloat-> " << std::fixed << std::setprecision(2) << this->convertedFloat << "f");
	LOG("\tDouble-> " << this->convertedDouble);
}

void	Convert::displayDouble(double a) {
	LOG("Converted values are:");
	if (!isprint(this->getConvertedChar()))
		LOG("\tChar-> Non displayable");
	else if ( a > std::numeric_limits<char>::max() || a < std::numeric_limits<char>::min() )
		LOG("\tChar-> Impossible");
	else
		LOG("\tChar-> " << this->convertedChar);
	if ( a > std::numeric_limits<int>::max() || a < std::numeric_limits<int>::min() )
		LOG("\tInt-> Impossible");
	else
		LOG("\tInt-> " << this->convertedInt);
	if ( a > std::numeric_limits<float>::max() || a < std::numeric_limits<float>::min() )
		LOG("\tFloat-> Impossible");
	else
	LOG("\tFloat-> " << std::fixed << std::setprecision(3) << this->convertedFloat << "f");
	LOG("\tDouble-> " << this->convertedDouble);
}

#include "ToInt.hpp"

ToInt::ToInt( void ) {
}

ToInt::ToInt(std::string const val): _value(stoi(val)){

}

ToInt::ToInt( ToInt const& src ) {
	*this = src;
}

ToInt::~ToInt( void ) {
}


ToInt&	ToInt::operator=( ToInt const& rhs ) {
	this->_value = rhs._value;
	return (*this);
}

ToInt::operator double() {
	return (static_cast<double>(this->_value));
}

ToInt::operator int() {
	return (this->_value);
}

ToInt::operator char() {
	return (static_cast<char>(this->_value));
}

ToInt::operator float() {
	return (static_cast<float>(this->_value));
}
#include "Data.hpp"

Data::Data( void ): testInt(42), testString("forty-two") {

}

Data::Data( int num, std::string str ): testInt(num), testString(str) {

}

Data::Data( Data const& src ) {
	*this = src;
}

Data::~Data( void ) {

}

int	Data::getInt( void ) const {
	return (this->testInt);
}

std::string	Data::getString( void ) const {
	return (this->testString);
}

Data&	Data::operator=( Data const& rhs ) {
	this->testInt = rhs.testInt;
	this->testString = rhs.testString;
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Data const& data) {
	os << "int: " << data.getInt() << std::endl;
	os << "string " << data.getString();
	return (os);
}

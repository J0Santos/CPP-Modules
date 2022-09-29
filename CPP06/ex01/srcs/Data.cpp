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


Data&	Data::operator=( Data const& rhs ) {
	this->testInt = rhs.testInt;
	this->testString = rhs.testString;
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Data const& data) {
	
}

#include "Base.hpp"

Base::Base( void ): type("Z") {

}

Base::~Base( void ) {

}

std::string	Base::getType( void ) const {
	return (this->type);
}

void	Base::setType( std::string newType) {
	this->type = newType;
}

std::ostream& operator<<(std::ostream &os, Base const& base) {
	os << &base;
	return (os);
}

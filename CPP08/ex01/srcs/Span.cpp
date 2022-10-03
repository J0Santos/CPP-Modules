#include "Span.hpp"

Span::Span( void ): limit(0) {

}

Span::Span(unsigned int N): limit(N), storage(std::vector<int>(N, 0)) {

}

Span::Span( Span const& src ) {
	*this = src;
}

Span::~Span( void ) {

}


Span&	Span::operator=( Span const& rhs ) {
	/* definition here */
	return (*this);
}
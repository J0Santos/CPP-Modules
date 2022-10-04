#include "Span.hpp"

Span::Span( void ): limit(0) {

}

Span::Span(unsigned int N): limit(N), storage() {

}

Span::Span( Span const& src ) {
	*this = src;
}

Span::~Span( void ) {

}

int	Span::getLimit(void) const {
	return (this->limit);
}

std::vector<int>	Span::getVector(void) const {
	return (this->storage);
}

const char* Span::overLimitException::what(void) const throw() {
	LOG(RED);
	return("Limit reached.");
}

const char* Span::notEnoughNumsException::what(void) const throw() {
	LOG(RED);
	return("Span is not big enough.");
}

void	Span::addNumberRange(int* begin, int* end)
{
	if (this->storage.size() + (end - begin) >= this->limit)
		throw(overLimitException());
	this->storage.insert(this->storage.begin(), begin, end);
}

void	Span::addNumberRange(std::vector<int>:: iterator begin, std::vector<int>:: iterator end ) {
	if (this->storage.size() + (end - begin) >= this->limit)
		throw(overLimitException());
	this->storage.insert(this->storage.begin(), begin, end);
}

void	Span::addNumber(int num) {
	if (this->storage.size() >= this->limit)
		throw overLimitException();
	this->storage.push_back(num);
}

int	Span::shortestSpan(void) {
	std::vector<int>::iterator min = std::min_element(this->storage.begin(), this->storage.end());
	int diff = INT_MAX;

	if (this->storage.size() < 2)
		throw (notEnoughNumsException());
	for (std::vector<int>::iterator it = this->storage.begin(); it != this->storage.end(); it++) {
		if (it == min)
			continue ;
		if (diff > *it - *min)
			diff = *it - *min;
	}
	return (diff);
}		

int	Span::longestSpan(void) {
	if (this->storage.size() < 2)
		throw (notEnoughNumsException());
	std::vector<int>::iterator min = std::min_element(this->storage.begin(), this->storage.end());
	std::vector<int>::iterator max = std::max_element(this->storage.begin(), this->storage.end());
	return (*max - *min);
}

Span&	Span::operator=( Span const& rhs ) {
	this->limit = rhs.limit;
	this->storage = rhs.storage;
	return (*this);
}
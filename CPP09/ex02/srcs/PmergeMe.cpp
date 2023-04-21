#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {

}

PmergeMe::PmergeMe( PmergeMe const& src ) {
	*this = src;
}

PmergeMe::~PmergeMe( void ) {

}


PmergeMe&	PmergeMe::operator=( PmergeMe const& rhs ) {
		this->_stack = rhs._stack;
		this->_queue = rhs._queue;
	return (*this);
}
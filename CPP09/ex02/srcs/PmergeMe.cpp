#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {

}

PmergeMe::PmergeMe( PmergeMe const& src ) {
	*this = src;
}

PmergeMe::~PmergeMe( void ) {

}

PmergeMe&	PmergeMe::operator=( PmergeMe const& rhs ) {
		this->_vector = rhs._vector;
		this->_list = rhs._list;
	return (*this);
}

void	PmergeMe::printSTLs( void ) {
	std::cout << "Vector: ";
	for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "List: ";
	for (std::list<int>::iterator it = this->_list.begin(); it != this->_list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::fillSTLs( std::string const& str ) {
	this->_vector.push_back(std::atoi(str.c_str()));
	this->_list.push_back(std::atoi(str.c_str()));
}

void	PmergeMe::sortVector( void ) {
	clock_t	start = clock();
	
	//sorting algorithm

	clock_t	end = clock();
	this->_vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void	PmergeMe::sortList( void ) {
	clock_t	start = clock();

	//sorting algorithm

	clock_t	end = clock();
	this->_listTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

double	PmergeMe::getVectorTime( void ) const {
	return (this->_vectorTime);
}

double	PmergeMe::getListTime( void ) const {
	return (this->_listTime);
}
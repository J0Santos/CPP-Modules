#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {

}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& src ) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange( void ) {

}


BitcoinExchange&	BitcoinExchange::operator=( BitcoinExchange const& rhs ) {
	/* definition here */
	return (*this);
}
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

# define LOG(x) std::cout << x << std::endl

class BitcoinExchange {

private:
	std::map<


public:
	BitcoinExchange( void ); /* Default constructor */
	BitcoinExchange( BitcoinExchange const& src ); /* Copy constructor */
	~BitcoinExchange( void ); /* Destructor */

	BitcoinExchange	&operator=( BitcoinExchange const& rhs ); /* Copy assignment operator */

};

#endif /* BITCOINEXCHANGE_HPP */
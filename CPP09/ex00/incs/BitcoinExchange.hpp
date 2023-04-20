#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <iostream>
# include <string>
# include <cstdlib>

# define LOG(x) std::cout << x << std::endl
# define LOG_D(x) std::cout << x << std::endl

class BitcoinExchange {

private:
	std::map<std::string, float> _rates;

public:
	BitcoinExchange( void ); /* Default constructor */
	BitcoinExchange( BitcoinExchange const& src ); /* Copy constructor */
	~BitcoinExchange( void ); /* Destructor */

	BitcoinExchange	&operator=( BitcoinExchange const& rhs ); /* Copy assignment operator */

	void	buildDB( void );
	void	handleInput(std::string file);
	void	printExchange( void );

};

#endif /* BITCOINEXCHANGE_HPP */
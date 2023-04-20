#include "BitcoinExchange.hpp"

int	main( int argc, char** argv ) {

	if (argc > 2) {
		LOG("Please insert on file only");
		exit(EXIT_SUCCESS);
	}
	else if (argc != 2) {
		LOG("Could not open file");
		exit(EXIT_SUCCESS);
	}
	

	 /* implementation here */
}
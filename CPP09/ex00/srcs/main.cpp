#include "BitcoinExchange.hpp"

int	main( int argc, char** argv ) {

	BitcoinExchange exchange;

	if (argc == 2) {
		std::string in_file = argv[1];
		try {
			exchange.buildDB();
			exchange.handleInput(in_file);
		}
		catch (std::exception &e) {
			LOG(e.what());
	}
	}
	else {
		LOG("Could not open file");
		exit(EXIT_SUCCESS);
	}
	
}
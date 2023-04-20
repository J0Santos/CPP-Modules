#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	LOG_D("Default constructor called");
}

BitcoinExchange::~BitcoinExchange( void ) {
	LOG_D("Destructor called");
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const& src ) {
	*this = src;
}

BitcoinExchange&	BitcoinExchange::operator=( BitcoinExchange const& rhs ) {
	_rates = rhs._rates;
	return (*this);
}

void	BitcoinExchange::buildDB( void ) {
	
	std::ifstream _inFile;
	_inFile.open("data.csv");
	if (!_inFile.is_open()) {
		throw std::runtime_error("Could not open data file");
	}
	std::string line;
	while (std::getline(_inFile, line)) {
		std::string key = line.substr(0, line.find(','));
		std::string value = line.substr(line.find(',') + 1, line.length() - line.find(','));
		_rates[key] = std::atof(value.c_str());
	}
	_inFile.close();
	// for (std::map<std::string, float>::iterator it = _rates.begin(); it != _rates.end(); it++) {
	// 	LOG(it->first << " " << it->second);
	// }
}

void	BitcoinExchange::handleInput( std::string file ) {
	std::ifstream _inFile;
	_inFile.open(file.c_str());
	if (!_inFile.is_open()) {
		throw std::runtime_error("Could not open file");
	}
	std::string line;
	int lineNumber = 0;
	while (std::getline(_inFile, line)) {
		lineNumber++;
		if (line.size() < 14 || line.find('|') == 0
			|| line.find('|') == line.length() - 1
			|| line.find('|') == std::string::npos) {
			LOG("Error: bad input on line " << lineNumber);
			continue;
		}
		std::string key = line.substr(0, line.find('|'));
		if (!validKey(key, lineNumber)) {
			continue;
		}
		

		std::string value = line.substr(line.find('|') + 1, line.length() - line.find('|'));
		}
	_inFile.close();
}
	// for (std::map<std::string, float>::iterator it = _exchange.begin(); it != _exchange.end(); it++) {
	// 	LOG(it->first << " " << it->second);
	// }


bool	validKey( std::string key, int lineNumber ) {
	if (key.size() != 11) {
			LOG("Error: bad input on line " << lineNumber << "=> " << key);
		}
	int year, month, day;
	year = std::atoi(key.substr(0, 4).c_str());
	month = std::atoi(key.substr(6, 2).c_str());
	day = std::atoi(key.substr(10, 2).c_str());
	
	
	return (true);
	}

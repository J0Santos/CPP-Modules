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
		if (lineNumber == 1) {
			continue;
		}
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
		std::string value = line.substr(line.find('|') + 2, line.length() - line.find('|'));
		if (!validValue(value, lineNumber)) {
			continue;
		}
		printExchange(key, value);
		}
	_inFile.close();
}

void	BitcoinExchange::printExchange( std::string key, std::string value ) {
	std::map<std::string, float>::iterator it = _rates.lower_bound(key);
	float f = std::atof(value.c_str());
	it--;
	float rate = it->second;
	// LOG("it->first: " << it->first << " it->second: " << it->second);
	// LOG("key: " << key << " value: " << value);
	float result = f * rate;
	LOG(key << " => " << value << " = " << result);
}

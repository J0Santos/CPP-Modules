#include "utils.hpp"

bool	validKey( std::string key, int lineNumber ) {
	if (key.size() != 11) {
			LOG("Error: bad input on line " << lineNumber << "=> " << key);
			return (false);
		}
	int year, month, day;
	year = std::atoi(key.substr(0, 4).c_str());
	month = std::atoi(key.substr(5, 2).c_str());
	day = std::atoi(key.substr(9, 2).c_str());
	if (year < 2009 || year > 2019 || month < 1 || month > 12 || day < 1 || day > 31) {
		LOG("Error: bad input on line " << lineNumber << " => " << key);
		return (false);
	}	
	return (true);
}

bool	validValue( std::string value, int lineNumber ) {
	float f = std::atof(value.c_str());
	if (f < 0 || f > 1000) {
		LOG("Error: bad input on line " << lineNumber << " => Value must be between 0 and 1000" );
		return (false);
	}
	return (true);
}
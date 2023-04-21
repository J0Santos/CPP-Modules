#include <string>
#include <sstream>

#include "RPN.hpp"

int main( int argc, char **argv ) {
	RPN rpn;

	if (argc != 2) {
		LOG("Usage: ./rpn \"<expression>\"");
		exit(EXIT_SUCCESS);
	}
	
	std::string value;
	std::string input = argv[1];
	std::istringstream iss(input);
	int res;
	try {
		while (iss >> value) {
			if (isdigit(value[0])) {
				rpn.pushToStack(std::atoi(value.c_str()));
			}
			else {
				res = rpn.doOperation(value[0]);
			}
		}
		LOG(res);
	}
	catch (std::exception &e) {
		LOG(e.what());
	}
	return (0);
}
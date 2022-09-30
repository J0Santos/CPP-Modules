// #include "classHeader.hpp"
#include <iostream>
#include <cstdlib>
#include "Colors.hpp"
#include "Array.hpp"

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;

	Array<int>	num1(5);
	Array<int>	num2(num1);
	Array<int>	num3;

	LOG(num3.size());
	try {
		LOG(BLUE << "Can reach index 2: " << num1[2] << RESET);
		LOG(BLUE << "Cant reach index 5: " << num1[5] << RESET);
	}
	catch(std::exception &e) {
		LOG(RED << e.what() << RESET);
	}
	LOG("");
	srand(time(NULL));
	for (int i = 0; i < num1.size(); i++) {
		LOG("i is " << i << " and array num1 of i is: " << num1[i]);
		num1[i] = rand();
		LOG(GREEN << "Now, num1 of i is: " << num1[i] << RESET);
		LOG("i is " << i << " and array num2 of i is: " << num2[i]);
		LOG("");
	}
}
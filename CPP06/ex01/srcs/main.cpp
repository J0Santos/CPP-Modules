#include "functions.hpp"

int	main( int argc, char** argv ) {
	
	(void)argc;
	(void)argv;
	Data* a = new Data(21, "bolas");
	uintptr_t	val;
	
	LOG(val);
	val = serialize(a);
	LOG(val);
	
}
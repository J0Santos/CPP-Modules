#include "functions.hpp"
#include "Colors.hpp"


int	main( int argc, char** argv ) {
	
	(void)argc;
	(void)argv;
	Data* a = new Data(21, "bolas");
	Data* b = new Data();
	uintptr_t	val = 0;
	
	LOG("val :" << val);
	LOG("a: \n" << a);
	LOG(YELLOW << "Serialization" << RESET);
	val = serialize(a);
	LOG("new val: " << val);
	LOG(YELLOW << "Deserialization" << RESET);
	LOG("b: \n" << *b);
	b = deserialize(val);
	LOG("new b :\n" << *b);

	LOG(a);
	LOG(deserialize(serialize(a)));
}
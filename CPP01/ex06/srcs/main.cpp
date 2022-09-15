#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	std::string	level;
	int i;

	if (argc != 2)
	{
		LOG("[ Probably complaining about insignificant problems ]");
		exit(EXIT_FAILURE);
	}
	level = argv[1];
	for (i = 0; i < 4; i++)
	{
		if (level.compare(harl.arr[i]) == 0)
			break ;
	}
	switch (i) 
	{
		default:
			LOG("[ Probably complaining about insignificant problems ]");
			break ;
		case 0:
			harl.complain(harl.arr[i++]);
		case 1:
			harl.complain(harl.arr[i++]);
		case 2:
			harl.complain(harl.arr[i++]);
		case 3:
			harl.complain(harl.arr[i++]);
	}
}

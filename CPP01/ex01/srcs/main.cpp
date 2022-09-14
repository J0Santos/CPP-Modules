#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int num = 34;

	horde = zombieHorde(num, "josantos");
	for (int i = 0; i < num; i++)
	{
		horde[i].announce();
		horde[i].announce2();
	}
	delete[] horde;
}

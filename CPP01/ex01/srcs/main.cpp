#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int num = 2;

	horde = zombieHorde(num, "josantos");
	for (int i = 0; i < num; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}

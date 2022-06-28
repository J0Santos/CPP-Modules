#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		PRINT("Zombie Hord has to be at least 1 zombies");
		exit( EXIT_FAILURE );
	}

	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*heap;

	randomChump( "Chump" );
	heap = newZombie( "josantos" );
	heap->announce();
	delete heap;
}

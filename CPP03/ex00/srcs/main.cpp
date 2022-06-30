#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	trap("Carlos");
	
	trap.printStats();
	trap.attack( "Jorge" );
	trap.takeDamage(7);
	trap.beRepaired(3);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.takeDamage(30);
	trap.beRepaired(2);
	trap.takeDamage(3);
}

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	trap("Ambrosio");
	
	//trap.printStats();
	trap.attack( "Jorge" );
	trap.takeDamage(70);
	trap.beRepaired(30);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.guardGate();
	trap.takeDamage(300);
	trap.beRepaired(20);
	trap.takeDamage(30);
}

#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	trap("test");
	
	trap.whoAmI();
	trap.attack( "Jorge" );
	trap.highFivesGuys();
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

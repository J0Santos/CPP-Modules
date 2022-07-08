#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	trap("test");
	
	trap.whoAmI();
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
	trap.highFivesGuys();
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.beRepaired(10);
	trap.takeDamage(300);
	trap.beRepaired(20);
	trap.takeDamage(30);
}

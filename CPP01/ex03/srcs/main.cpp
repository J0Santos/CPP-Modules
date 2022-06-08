#include <HumanA.hpp>
#include <HumanB.hpp>

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		//jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		club.setType("Nuclear Weapon of massive destruction 9000");
		jim.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		Weapon hand = Weapon("bare fists");

		HumanB pablo("pablo", &hand);
		pablo.attack();
		pablo.setWeapon(club);
		pablo.attack();
		club.setType("some other type of club");
		pablo.attack();
		club.setType("Nuclear Weapon of massive destruction 9000");
		pablo.attack();
	}
	return (0);
}

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon): name(name), weaponType(weapon)
{
	LOG("HumanB named " << name << "was born with a " << weaponType->getType());
}


HumanB::HumanB(std::string name): name(name)
{

	LOG("HumanB named " << name << " was born without a weapon");
}

HumanB::~HumanB(void)
{
	LOG("HumanB named " << name << " died");

}

void	HumanB::attack(void)
{
	LOG(name << " attacks with their " << weaponType->getType());
}


void	HumanB::setWeapon(Weapon &weapon)
{
	this->weaponType = &weapon;
	LOG(name << " has been given a " << weapon.getType());
}

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weaponType(weapon)
{
	LOG("HumanA named " << name << " was born and given " << weaponType.getType() << " as a weapon");
}

HumanA::~HumanA(void)
{
	LOG("Human " << name << " died.");
}

void	HumanA::attack(void)
{
	LOG(name << " attacks with their " << weaponType.getType());
}

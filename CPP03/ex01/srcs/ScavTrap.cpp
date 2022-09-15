#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	LOG("Scavtrap shows up");
}

ScavTrap::ScavTrap( std::string name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDmg(20);
	LOG("ScavTrap gets shot from inside Claptrap's belly with the following stats:");
	this->printStats();
}

ScavTrap::ScavTrap( ScavTrap const& src )
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	LOG("Scavtrap " << this->getName() << " disappears into thin air");
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	ScavTrap::guardGate( void )
{
	LOG("Beware, " << this->getName() << " is now in Gate Keeper Mode");
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		--this->energyPoints;
		LOG(this->name << " uses its spin attack on " << target
			<< " dealing " << this->attackDmg << "dmg");
	}
	else if (this->hitPoints <= 0)
		LOG(this->name << " is dead bruv");
	else
		LOG(this->name << " is exhausted and cannot perform any actions");
}
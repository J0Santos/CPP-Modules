#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDmg(20);
	LOG("ScavTrap get shot from inside Claptrap's belly with the following stats:");
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
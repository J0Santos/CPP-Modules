#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("Scavenger")
{
	this->name = "Scavenger";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDmg = 20;
	// LOG("ScavTrap get shot from inside Claptrap's belly with the following stats:");
	// this->printStats();
}

ScavTrap::ScavTrap( std::string name): ClapTrap(name)
{
	this-> hitPoints = 100;
	this->energyPoints = 50;
	this->attackDmg = 20;
	LOG("ScavTrap get shot from inside Claptrap's belly with the following stats:");
	this->printStats();
}

ScavTrap::ScavTrap( ScavTrap const& src )
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	LOG(this->getName() << " disappears into thin air - Scavtrap");
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
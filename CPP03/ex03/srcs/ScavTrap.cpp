#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap("Scavenger")
{
	this->name = "Scavenger";
	this->hitPoints = hpDefault;
	this->energyPoints = epDefault;
	this->attackDmg = dmgDefault;
	// LOG("ScavTrap get shot from inside Claptrap's belly with the following stats:");
	// this->printStats();
}

ScavTrap::ScavTrap( std::string name): ClapTrap(name)
{
	this-> hitPoints = hpDefault;
	this->energyPoints = epDefault;
	this->attackDmg = dmgDefault;
	// LOG("ScavTrap get shot from inside Claptrap's belly with the following stats:");
	// this->printStats();
}

ScavTrap::ScavTrap( ScavTrap const& src )
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	//LOG(this->getName() << " disappears into thin air - Scavtrap");
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

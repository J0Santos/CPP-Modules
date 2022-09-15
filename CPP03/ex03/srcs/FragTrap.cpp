#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("Fragger")
{
	this->name = "Fragger";
	this->hitPoints = hpDefault;
	this->energyPoints = epDefault;
	this->attackDmg = dmgDefault;
	// LOG("FragTrap appears with the following stats:");
	// this->printStats();
}

FragTrap::FragTrap( std::string name): ClapTrap(name)
{
	this->hitPoints = hpDefault;
	this->energyPoints = epDefault;
	this->attackDmg =  dmgDefault;
	// LOG("From the bottom of the ClapTrap a FragTrap shows up with the follwing stats:");
	// this->printStats();
}

FragTrap::FragTrap( FragTrap const& src)
{
	*this = src;
}

FragTrap::~FragTrap( void )
{
	//LOG(this->getName() << " vanishes in a smoke cloud - FragTrap");
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	LOG(this->getName() << " lift its robot arms and asks for positive high fives from anyone that wants to");
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		--this->energyPoints;
		LOG(this->name << " slaps " << target
			<< " dealing " << this->attackDmg << "dmg");
	}
	else if (this->hitPoints <= 0)
		LOG(this->name << " is dead bruv");
	else
		LOG(this->name << " is exhausted and cannot perform any actions");
}

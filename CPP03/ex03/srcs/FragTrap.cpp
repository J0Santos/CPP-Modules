#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap("Fragger")
{
	this->name = "Fragger";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDmg = 30;
	// LOG("FragTrap appears with the following stats:");
	// this->printStats();
}

FragTrap::FragTrap( std::string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints =  100;
	this->attackDmg =  30;
	LOG("From the bottom of the ClapTrap a FragTrap shows up with the follwing stats:");
	this->printStats();
}

FragTrap::FragTrap( FragTrap const& src)
{
	*this = src;
}

FragTrap::~FragTrap( void )
{
	LOG(this->getName() << " vanishes in a smoke cloud - FragTrap");
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

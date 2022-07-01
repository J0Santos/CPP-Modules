#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	LOG("FragTrap appears");
}

FragTrap::FragTrap( std::string name)
{
	this->setName( name );
	this->setHitPoints( 100 );
	this->setEnergyPoints( 100 );
	this->setAttackDmg( 30 );
	LOG("From the bottom of the ClapTrap a FragTrap shows up with the follwing stats:");
	this->printStats();
}

FragTrap::FragTrap( FragTrap const& src)
{
	*this = src;
}

FragTrap::~FragTrap( void )
{
	LOG(this->getName() << " vanishes in a smoke cloud");
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	LOG(this->getName() << " lift its robot arms and asks for positive high fives from anyone that want to");
}

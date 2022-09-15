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
	LOG("From the bottom of the ClapTrap a FragTrap shows up with the following stats:");
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
	LOG(this->getName() << " lifts his robot arms and asks for positive high fives as he believes he did a good job!");
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

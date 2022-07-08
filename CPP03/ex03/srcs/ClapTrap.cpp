#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	LOG("ClapTrap spawns");
}

ClapTrap::ClapTrap( std::string name ): name(name), hitPoints(10), 
										energyPoints(10), attackDmg(0)
{
	// LOG("ClapTrap spawns with the name " << name 
	// 	<< " with " << hitPoints << " hit points, " 
	// 	<< energyPoints <<  " energy and " 
	// 	<< attackDmg << " attack damage.");
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	LOG("ClapTrap is now gone");
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDmg = rhs.getAttackDmg();
	return *this;
}

std::string	ClapTrap::getName( void ) const
{
	return (this->name);
}

int	ClapTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int	ClapTrap::getAttackDmg( void ) const
{
	return (this->attackDmg);
}

void	ClapTrap::setName( std::string name )
{
	this->name = name;
}

void	ClapTrap::setHitPoints( int value )
{
	this->hitPoints = value;
}

void	ClapTrap::setEnergyPoints( int value )
{
	this->energyPoints = value;
}

void	ClapTrap::setAttackDmg( int value )
{
	this->attackDmg = value;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		--this->energyPoints;
		LOG(this->name << " attacks " << target
			<< " dealing " << this->attackDmg << "dmg");
	}
	else if (this->hitPoints <= 0)
		LOG(this->name << " is dead bruv");
	else
		LOG(this->name << " is exhausted and cannot perform any actions");
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->hitPoints > 0)
	{
		this->hitPoints -= amount;
		LOG(this->name << " took " << amount 
			<< "dmg and now has " << this->hitPoints << "HP");
		if (this->hitPoints <= 0)
			LOG(this->name << " died" );
	}
	else
		LOG("Staaahp, " << this->name << " is already dead!!");
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		--this->energyPoints;
		this->hitPoints += amount;
		LOG(this->name << " repairs itself for "
			<< amount << " and now has " << this->hitPoints << "HP");
	}
	else if (this->hitPoints <= 0)
		LOG(this->name << " is dead bruv");
	else
		LOG(this->name << " is exhausted and cannot perform any actions");
}

void	ClapTrap::printStats( void ) const
{
	LOG("\tname: " << this->getName());
	LOG("\thit points: " << this->getHitPoints());
	LOG("\tenergy points: " << this->getEnergyPoints());
	LOG("\tattack damage: " << this->getAttackDmg());
}

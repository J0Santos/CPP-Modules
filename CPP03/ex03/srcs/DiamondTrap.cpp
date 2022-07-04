#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): FragTrap("whatever"), ScavTrap("whatever")
{
	this->name = "whatever";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDmg = FragTrap::attackDmg;	
	LOG("DiamondTrap stats:");
	this->printStats();
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDmg = FragTrap::attackDmg;
	ClapTrap::name += "_clap_name";
	LOG("DiamondTrap stats:");
	this->printVals();
}

DiamondTrap::DiamondTrap( DiamondTrap const &src )
{
	*this = src;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const &rhs )
{
	this->_name = rhs._name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDmg = rhs.attackDmg;
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	LOG("DiamondTrap is gone");
}

void	DiamondTrap::attack( const std::string &target )
{
	this->ScavTrap::attack( target );
}

void	DiamondTrap::printVals( void ) const
{
	LOG("\tname: " << this->name << " aka " << this->_name);
	LOG("\thit points: " << this->hitPoints);
	LOG("\tattack damage: " << this->attackDmg);
	LOG("\tenergy points: " << this->energyPoints);
}

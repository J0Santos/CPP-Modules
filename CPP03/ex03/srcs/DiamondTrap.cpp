#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	this->name = "whatever";
	this->hitPoints = FragTrap::hpDefault;
	this->energyPoints = ScavTrap::epDefault;
	this->attackDmg = FragTrap::dmgDefault;

	LOG("DiamondTrap stats:");
	this->printStats();
}

DiamondTrap::DiamondTrap( std::string name ): ScavTrap(name), FragTrap(name), _name(name)
{
	this->hitPoints = FragTrap::hpDefault;
	this->energyPoints = ScavTrap::epDefault;
	this->attackDmg = FragTrap::dmgDefault;
	ClapTrap::name = _name + "_clap_name";
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

void	DiamondTrap::whoAmI( void )
{
	LOG("My name is " << this->name << " but you can call me " << _name);
}

void	DiamondTrap::printVals( void ) const
{
	LOG("\tname: " << this->name << " aka " << this->_name);
	LOG("\thit points: " << this->getHitPoints());
	LOG("\tenergy points: " << this->getEnergyPoints());
	LOG("\tattack damage: " << this->getAttackDmg());
}

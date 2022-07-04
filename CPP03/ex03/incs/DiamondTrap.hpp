#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {

private:
	std::string _name;

public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap(DiamondTrap const& src);
	~DiamondTrap( void );

	DiamondTrap	&operator=(DiamondTrap const& rhs);

	void	setName( std::string const &new_name);

	void	getName( void ) const;
	void	whoAmI( void );
	void	attack( const std::string &target);
	void	printVals( void ) const;

};


#endif /* DIAMONDTRAP_HPP */
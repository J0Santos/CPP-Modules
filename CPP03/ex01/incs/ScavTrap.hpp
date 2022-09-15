#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	

public:
	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap(ScavTrap const& src);
	~ScavTrap();

	ScavTrap& operator=(ScavTrap const& rhs);

	void	guardGate( void );
	void	attack(const std::string& target);
};

#endif /* SCAVTRAP_HPP */

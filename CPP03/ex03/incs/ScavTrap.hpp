#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
	

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap(ScavTrap const& src);
	~ScavTrap();

	ScavTrap& operator=(ScavTrap const& rhs);

	void	guardGate( void );
};

#endif /* SCAVTRAP_HPP */

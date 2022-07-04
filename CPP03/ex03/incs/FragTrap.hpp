#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

private:


public:
	FragTrap ( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const& src );
	~FragTrap( void );

	FragTrap& operator=(FragTrap const& rhs);

	void	highFivesGuys( void );
};

#endif /* FRAGTRAP_HPP */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

protected:
	static const int	hpDefault = 100;
	static const int	epDefault = 100;
	static const int	dmgDefault = 30;

public:
	FragTrap ( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const& src );
	~FragTrap( void );

	FragTrap& operator=(FragTrap const& rhs);

	void	highFivesGuys( void );
	void	attack(const std::string& target);
};

#endif /* FRAGTRAP_HPP */
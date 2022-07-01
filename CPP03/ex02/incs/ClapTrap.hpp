#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class ClapTrap {

private:
	std::string name;
	int	hitPoints;
	int	energyPoints;
	int	attackDmg;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& src);
	~ClapTrap();

	ClapTrap&	operator=(ClapTrap const &rhs);

	std::string	getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackDmg( void ) const;

	void	setName( std::string name );
	void	setHitPoints( int value );
	void	setEnergyPoints( int value );
	void	setAttackDmg( int value );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	printStats( void ) const;

};

#endif /* CLAPTRAP_HPP */
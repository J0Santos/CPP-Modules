#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define PRINT(x) std::cout << x << std::endl

# include <iostream>
# include <stdlib.h>

class Zombie
{
private: 
	std::string	_name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void	setName( std::string name );
	void	announce(void);
	void	announce2(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif/* ZOMBIE_HPP */

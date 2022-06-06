#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define PRINT(x) std::cout << x << std::endl

# include <iostream>

class Zombie
{
private: 
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif/* ZOMBIE_HPP */

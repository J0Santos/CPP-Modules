#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"

# define PRINT(x) std::cout << x << std::endl;

class Zombie {

public:
	Zombie( std::string name );
	Zombie();
	~Zombie();
	void	announce( void );

private:
	std::string	name;
};

Zombie	*newZombie( std::string name);
void	randomChump( std::string name );

#endif /* ZOMBIE_HPP */

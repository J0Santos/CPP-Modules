#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"

# define PRINT(x) std::cout << x << std::endl;

class Zombie {

public:
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
	Zombie	*newZombie( std::string );
	void	randomChump( std::string name );

private:
	std::string	name;
};

#endif /* ZOMBIE_HPP */

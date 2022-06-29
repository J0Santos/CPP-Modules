#include "Zombie.hpp"

Zombie::Zombie(void)
{
	PRINT("A Zombie arised");
}

Zombie::Zombie(std::string name): _name(name)
{
	PRINT("Zombie's name is " << this->_name);
}

Zombie::~Zombie(void)
{
	PRINT("Zombie " << this->_name << " was killed!");
}

void	Zombie::announce(void)
{
    PRINT(this->_name << ": " << " BraiiiiiiinnnzzzZ...");
}

void	Zombie::setName( std::string name)
{
	this->_name = name;
}

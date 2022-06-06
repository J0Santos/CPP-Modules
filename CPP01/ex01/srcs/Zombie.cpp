#include "Zombie.hpp"

Zombie::Zombie(void)
{
	PRINT("A Zombie arised");
}

Zombie::Zombie(std::string name): name(name)
{
	PRINT("Zombie's name is " << this->name);
}

Zombie::~Zombie(void)
{
	PRINT("Zombie " << this->name << " was killed!");
}

void	Zombie::announce(void)
{
    PRINT(this->name << ": " << " BraiiiiiiinnnzzzZ...");
}

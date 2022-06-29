#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->name = name;
	PRINT("Zombie " << this->name << " appeared!");
}

Zombie::Zombie( void )
{
}

Zombie::~Zombie( void )
{
	PRINT("Zombie " << this->name << " was killed!");
}

void	Zombie::announce( void )
{
	PRINT(this->name << ": " << " BraiiiiiiinnnzzzZ...");
}

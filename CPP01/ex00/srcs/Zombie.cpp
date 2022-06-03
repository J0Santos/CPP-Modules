#include "Zombie.hpp"

Zombie::Zombie ( std::string name )
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	"Destructor called";
}

void	Zombie::announce( void )
{
	PRINT(name << ": " << " BraiiiiiiinnnzzzZ...");
}

void	setZombieName()
{

}

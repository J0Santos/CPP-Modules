#include "Character.hpp"

Character::Character( void )
{
}

Character::Character( std::string name ): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i]->setType("");
}

Character::Character( Character const& src )
{
	*this = src;
}

Character::~Character( void )
{
}

Character&	Character::operator=( Character const& rhs )
{
	this->_name = rhs._name;
	return (*this);
}

std::string const& Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip( AMateria* m )
{
	int	slot;

	slot = inventSlot();
	if (!m || !slot)
		return ;
	this->inventory[slot] = m->clone();
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx] != 0)
		

}

int	Character::inventSlot( void )
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == 0)
			return (i);
	return (0);
}
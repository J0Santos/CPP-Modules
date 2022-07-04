#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	LOG(j->getType());
	LOG(i->getType());
	i->makeSound();
	j->makeSound();
	meta->makeSound();

}
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal	*animal[20];

	for (int i = 0; i < 10; i++)
		animal[i] = new Dog();
	for (int j = 10; j < 20; j++)
		animal[j] = new Cat();

	delete []animal;

	// const Animal *meta = new Animal();
	// const WrongAnimal *wrong = new WrongAnimal();
	// const Animal *j = new Dog();
	// const Animal *n = new Cat();
	// const WrongAnimal *i = new WrongCat();

	// meta->makeSound();
	// wrong->makeSound();

	// LOG(j->getType());
	// j->makeSound();
	// LOG(i->getType());
	// i->makeSound();
	// LOG(n->getType());
	// n->makeSound();

	// delete meta;
	// delete wrong;
	// delete j;
	// delete i;
	// delete n;
}
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	Animal	*animal[20];

	for (int i = 0; i < 4; i++)
	{
		if ( i < 2 )
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		animal[i]->makeSound();
		static_cast<Dog *>(animal[i])->getThought();
	}
	for (int i = 0; i < 4; i++)
	{
		delete animal[i];
	}

	std::cout << std::endl << std::endl;
	Dog		dog1;
	Dog*	dog2 = new Dog(dog1);
	
	delete dog2;
	dog1.getThought();

	std::cout << std::endl << std::endl;
	Cat		cat1;
	Cat*	cat2 = new Cat(cat1);
	
	delete cat2;
	cat1.getThought();
	
	//delete dog2;

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
#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

private:
	std::string _sound;
	Brain	*brain;

public:
	Dog( void );
	Dog( Dog const& src);
	~Dog( void );
	Dog	&operator=(Dog const& src);

	void	info( void );
	void	makeSound( void ) const;
	void	getThought( void ) const;
};

#endif /* DOG_HPP */
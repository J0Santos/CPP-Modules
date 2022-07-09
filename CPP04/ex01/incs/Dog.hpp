#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

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

};

#endif /* DOG_HPP */
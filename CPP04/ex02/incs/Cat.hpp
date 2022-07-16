#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

private:
	std::string _sound;
	Brain	*brain;

public:
	Cat( void );
	Cat( Cat const& src);
	~Cat( void );
	Cat	&operator=(Cat const& src);

	void	info( void );
	void	makeSound( void ) const;
	void	getThought( void ) const;
};

#endif /* CAT_HPP */
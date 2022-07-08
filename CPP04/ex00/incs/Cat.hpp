#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

private:
	std::string _sound;

public:
	Cat( void );
	Cat( Cat const& src);
	~Cat( void );
	Cat	&operator=(Cat const& src);

	void	info( void );
	void	makeSound( void ) const;
};

#endif /* CAT_HPP */
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

private:
	std::string _sound;

public:
	WrongCat( void );
	WrongCat( WrongCat const& src);
	~WrongCat( void );
	WrongCat	&operator=(WrongCat const& src);

	void	info( void );
	void	makeSound( void ) const;
};

#endif /* WRONGCAT_HPP */
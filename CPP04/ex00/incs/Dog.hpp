#include "Animal.hpp"

class Dog : public Animal {

private:
	std::string _sound;

public:
	Dog( void );
	Dog( Dog const& src);
	~Dog( void );
	Dog	&operator=(Dog const& src);

	void	info( void );
	void	makeSound( void ) const;

};
#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"

# define LOG(x) std::cout << x << std::endl

class Animal {

protected:
	std::string type;

public:
	Animal( void );
	Animal( std::string type );
	Animal( Animal const& src );
	~Animal( void );

	Animal	&operator=( Animal const& rhs );

	std::string	getType( void ) const;
	void	setType( std::string new_type );

	virtual void makeSound( void ) const;
};

#endif /* ANIMAL_HPP */
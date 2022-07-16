#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"

# define LOG(x) std::cout << x << std::endl

class AAnimal {

protected:
	std::string type;

public:
	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const& src );
	virtual ~AAnimal( void );

	AAnimal	&operator=( AAnimal const& rhs );

	std::string	getType( void ) const;
	void	setType( std::string new_type );

	virtual void makeSound( void ) const = 0;
};

#endif /* ANIMAL_HPP */
#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"

# define LOG(x) std::cout << x << std::endl

class WrongAnimal {

protected:
	std::string type;

public:
	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const& src );
	virtual ~WrongAnimal( void );

	WrongAnimal	&operator=( WrongAnimal const& rhs );

	std::string	getType( void ) const;
	void	setType( std::string new_type );

	virtual void makeSound( void ) const;
};

#endif /* WRONGANIMAL_HPP */
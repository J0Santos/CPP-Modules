#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl
# define BRAIN_SIZE 100

class Brain {

private:
	std::string	ideas[BRAIN_SIZE];

public:
	Brain( void ); /* Default constructor */
	Brain( Brain const& src ); /* Copy constructor */
	~Brain( void ); /* Destructor */

	Brain	&operator=( Brain const& rhs ); /* Copy assignment operator */

	std::string	*getIdeas( void );

};

#endif /* BRAIN_HPP */
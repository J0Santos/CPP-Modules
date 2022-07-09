#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class Brain {

private:


public:
	Brain( void ); /* Default constructor */
	Brain( Brain const& src ); /* Copy constructor */
	~Brain( void ); /* Destructor */

	Brain	&operator=( Brain const& rhs ); /* Copy assignment operator */

	std::string	ideas[100];
};

#endif /* BRAIN_HPP */
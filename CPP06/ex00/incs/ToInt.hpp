#ifndef TOINT_HPP
# define TOINT_HPP

# include <iostream>
#include <string>

# define LOG(x) std::cout << x << std::endl

class ToInt {

private:
	int	_value;

public:
	ToInt( void ); /* Default constructor */
	ToInt(std::string const val);
	ToInt( ToInt const& src ); /* Copy constructor */
	~ToInt( void ); /* Destructor */

	ToInt	&operator=( ToInt const& rhs ); /* Copy assignment operator */
	operator int();
	operator char();
	operator float();
	operator double();
};

#endif /* TOINT_HPP */
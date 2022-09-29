#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

# define LOG(x) std::cout << x << std::endl

class B : public Base {

private:

public:
	B( void ); /* Default constructor */
	~B( void ); /* Destructor */
};

#endif /* B_HPP */
#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

# define LOG(x) std::cout << x << std::endl

class A : public Base {

private:

public:
	A( void ); /* Default constructor */
	~A( void ); /* Destructor */
};

#endif /* A_HPP */
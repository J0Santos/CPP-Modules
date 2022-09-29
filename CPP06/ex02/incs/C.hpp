#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

# define LOG(x) std::cout << x << std::endl

class C : public Base {

private:

public:
	C( void ); /* Default constructor */
	~C( void ); /* Destructor */
};

#endif /* C_HPP */
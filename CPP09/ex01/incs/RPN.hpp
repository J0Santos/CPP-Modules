#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>


# define LOG(x) std::cout << x << std::endl

class RPN {

private:
	std::stack<int>		_stack;

public:
	RPN( void ); /* Default constructor */
	RPN( RPN const& src ); /* Copy constructor */
	~RPN( void ); /* Destructor */

	RPN	&operator=( RPN const& rhs ); /* Copy assignment operator */

	void	pushToStack( int const& n );
	int		doOperation( char const& op );

};

#endif /* RPN_HPP */
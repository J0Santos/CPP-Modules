#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

# define LOG(x) std::cout << x << std::endl

template <typename T>
class MutantStack {

private:
	std::stack<T>	stack;

public:
	MutantStack( void ); /* Default constructor */
	MutantStack( MutantStack const& src ); /* Copy constructor */
	~MutantStack( void ); /* Destructor */

	MutantStack	&operator=( MutantStack const& rhs ); /* Copy assignment operator */

	std::stack<T>::

};

#endif /* MUTANTSTACK_HPP */
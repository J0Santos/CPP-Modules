#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <string>

# define LOG(x) std::cout << x << std::endl

class PmergeMe {

private:
	std::vector<int>	_stack;
	std::list<int>		_queue;

public:
	PmergeMe( void ); /* Default constructor */
	PmergeMe( PmergeMe const& src ); /* Copy constructor */
	~PmergeMe( void ); /* Destructor */

	PmergeMe	&operator=( PmergeMe const& rhs ); /* Copy assignment operator */

	void	printSTLs( void );
	void	fillSTLs( std::string const& str );
	void	mergeSTLs( void );

};

#endif /* PMERGE_ME_HPP */
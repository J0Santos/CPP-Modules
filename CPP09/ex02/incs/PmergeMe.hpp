#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <string>
# include <cstdlib>
# include <ctime>

# define LOG(x) std::cout << x << std::endl

class PmergeMe {

private:
	std::vector<int>	_vector;
	std::list<int>		_list;
	double				_vectorTime;
	double				_listTime;

public:
	PmergeMe( void ); /* Default constructor */
	PmergeMe( PmergeMe const& src ); /* Copy constructor */
	~PmergeMe( void ); /* Destructor */

	PmergeMe	&operator=( PmergeMe const& rhs ); /* Copy assignment operator */

	void	printSTLs( void );
	void	fillSTLs( std::string const& str );
	void	sortVector( void );
	void	sortList( void );

	double	getVectorTime( void ) const;
	double	getListTime( void ) const;

};

#endif /* PMERGE_ME_HPP */
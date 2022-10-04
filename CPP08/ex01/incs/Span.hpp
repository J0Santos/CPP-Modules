#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <climits>
# include <algorithm>
# include "Colors.hpp"

# define LOG(x) std::cout << x << std::endl

class Span {

private:
	unsigned int		limit;
	std::vector<int>	storage;

public:
	Span( void ); /* Default constructor */
	Span( unsigned int N );
	Span( Span const& src ); /* Copy constructor */
	~Span( void ); /* Destructor */

	struct overLimitException: public std::exception {
		const char* what() const throw();
	};
	
	struct notEnoughNumsException: public std::exception {
		const char* what() const throw();
	};

	Span	&operator=( Span const& rhs ); /* Copy assignment operator */

	int					getLimit() const;
	std::vector<int>	getVector() const;
	void				addNumber( int num );
	void				addNumberRange(int* begin, int* end);
	void				addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int					shortestSpan();
	int					longestSpan();
};

#endif /* SPAN_HPP */
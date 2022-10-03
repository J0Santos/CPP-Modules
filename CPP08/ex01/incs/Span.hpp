#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

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

	Span	&operator=( Span const& rhs ); /* Copy assignment operator */

};

#endif /* SPAN_HPP */
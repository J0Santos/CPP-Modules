#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class Data {

private:
	int 		testInt;
	std::string	testString;


public:
	Data( void ); /* Default constructor */
	Data( int num, std::string str );
	Data( Data const& src ); /* Copy constructor */
	~Data( void ); /* Destructor */

	Data	&operator=( Data const& rhs ); /* Copy assignment operator */

};

std::ostream& operator<<(std::ostream &os, Data const& data);

#endif /* DATA_HPP */
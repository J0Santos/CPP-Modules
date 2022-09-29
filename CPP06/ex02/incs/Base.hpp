#ifndef BASE_
# define BASE_

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class Base {

private:
	std::string	type;

public:
	Base( void ); /* Default constructor */
	virtual ~Base( void ); /* Destructor */
	std::string	getType( void ) const;
	void		setType( std::string newType );
};

std::ostream& operator<<(std::ostream &os, Base const& base);

#endif /* BASE_ */
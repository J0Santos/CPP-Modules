#ifndef MATERIAARRAY_HPP
# define MATERIAARRAY_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class MateriaArray {

private:
	int size;
	void	**array;

public:
	MateriaArray( void ); /* Default constructor */
	MateriaArray( MateriaArray const& src ); /* Copy constructor */
	~MateriaArray( void ); /* Destructor */

	MateriaArray	&operator=( MateriaArray const& rhs ); /* Copy assignment operator */

};

#endif /* MATERIAARRAY_HPP */
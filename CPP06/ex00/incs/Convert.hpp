#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include "Colors.hpp"

# define LOG(x) std::cout << x << std::endl

enum type {
	INT = 1,
	CHAR = 2,
	FLOAT = 3,
	DOUBLE = 4,
};

class Convert {

private:
	int		convertedInt;
	char	convertedChar;
	float	convertedFloat;
	double	convertedDouble;


public:
	Convert( void ); /* Default constructor */
	Convert( int IntToConvert );
	Convert( char CharToConvert );
	Convert( float FloatToConvert );
	Convert( double DoubleToConvert );
	Convert( Convert const& src ); /* Copy constructor */
	~Convert( void ); /* Destructor */

	char	getConvertedChar() const;
	int		getConvertedInt() const;
	float	getConvertedFloat() const;
	double	getConvertedDouble() const;

	void	displayChar(char a);
	void	displayInt(int a);
	void	displayFloat(float a);
	void	displayDouble(double a);

	Convert	&operator=( Convert const& rhs ); /* Copy assignment operator */
};

std::ostream& operator<<(std::ostream& os, Convert const& obj );

#endif /* CONVERTED_HPP */
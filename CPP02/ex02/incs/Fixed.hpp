#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

#define	LOG(x) std::cout << x << std::endl

class Fixed {

public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const &src);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed	&operator=(Fixed const &rhs);

	bool	operator>( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;
	Fixed	operator+( Fixed const &rhs ) const;
	Fixed	operator+() const;
	Fixed	operator-() const;
	Fixed	operator*( Fixed const &rhs ) const;
	Fixed	operator/( Fixed const &rhs ) const;
	Fixed	operator++( void );
	Fixed	operator--( void );
	Fixed&	operator++( int );
	Fixed&	operator--( int );

private:
	int	rawVal;
	static const int	fracBits = 8;

};

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs);

#endif /* FIXED_HPP */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

#define	LOG(x) std::cout << x << std::endl

class Fixed {

public:
	Fixed(void);
	Fixed(int a);
	Fixed(Fixed const &src);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed&	operator=(Fixed const &rhs);

private:
	int	fixedPoint;
	static const int	fracBits = 8;

};

#endif /* FIXED_HPP */

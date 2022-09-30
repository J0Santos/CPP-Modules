#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

template< typename T >
void	swap(T &lhs, T &rhs) {
	T temp = rhs;
	rhs = lhs;
	lhs = temp;
}

template < typename T >
T const&	min(T const& lhs, T const& rhs) {
	// LOG("MY min");
	return (lhs < rhs ? lhs : rhs);
}

template < typename T >
T const&	max(T const& lhs, T const& rhs) {
	// LOG("My max");
	return (lhs > rhs ? lhs : rhs);
}

#endif /* WHATEVER_HPP */
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
#include "Colors.hpp"

# define LOG(x) std::cout << x << std::endl

template < typename T >
void	iter(T* array, int size, void(*f)(T const&)) {
	LOG(GREEN << "using int type" << RESET);
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	iter(T* array, size_t size, void(*f)(T const&)) {
	LOG(GREEN << "using size_t type" << RESET);
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif
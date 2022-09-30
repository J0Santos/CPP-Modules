#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

template < typename T >
void	iter(T* array, int size, void(*f)(T const&)) {
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	iter(T* array, int size, void(*f)(T &)) {
	for (int i = 0; i < size; i++)
		f(array[i]);
}

#endif
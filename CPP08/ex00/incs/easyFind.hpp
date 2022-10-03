#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define LOG(x) std::cout << x << std::endl

# include <iostream>
# include "Colors.hpp"

template <typename T>
void	easyFind(T container, int num) {

	for (typename T::iterator it = container.begin(); it != container.end(); it++) {
		if(num == *it)
		{
			LOG(GREEN << "Found occurrence" RESET);
			return ;
		}
	}
	throw std::exception();
}

#endif /* EASYFIND_HPP */
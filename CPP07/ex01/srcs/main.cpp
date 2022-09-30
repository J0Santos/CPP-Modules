#include "iter.hpp"
#include <cstdio>

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template <typename T>
void tenMultiplier(T &x) {
	LOG(x * 10);
	return ;
}

void caps(std::string const& x) {
	for(size_t i = 0; i < x.length(); i++)
		putchar(toupper(x[i]));
		LOG("");
}

int main() {
	{
		LOG(YELLOW << "Testing int array" << RESET);
		int tab[] = { 0, 1, 2, 3, 4 };
		size_t i = 5;

		iter( tab, 5, print );
		iter( tab, 5, tenMultiplier );
		iter(tab, i, tenMultiplier);
	}
	{
		LOG(YELLOW << "Testing string array" << RESET);
		std::string tab2[] = {"Hello", "goodbye"};
		iter(tab2, 2, caps);
	}
	{
		LOG(YELLOW << "Testing float array" << RESET);
		float tab3[] = {23.23, 234.2, 1.5};
		iter(tab3, 3, tenMultiplier);
	}
}
#include "iter.hpp"

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template <typename T>
void addZero(T &x) {
	LOG(x * 10);
	return ;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	iter( tab, 5, print );
	iter( tab, 5, addZero );
	return 0;
}
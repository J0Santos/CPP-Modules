#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <vector>
# include "Colors.hpp"

# define LOG(x) std::cout << x << std::endl

template < typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T> {

	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;

		MutantStack() {}
		MutantStack( MutantStack const& src ) {
			*this = src;
		}
		~MutantStack() {}
		MutantStack& operator = (const MutantStack &rhs) {
			this->c = rhs.c;
			return (*this);
		}

		iterator	begin() {
			return (this->c.begin());
		}

		iterator	end() {
			return (this->c.end());
		}

};


#endif /* MUTANTSTACK_HPP */
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include "Colors.hpp"

# define LOG(x) std::cout << x << std::endl

template <typename T>
class MutantStack : public std::stack<T> {

private:

public:
	MutantStack( void ) : std::stack<T>() {}
	~MutantStack( void ) {}
	MutantStack( MutantStack const& src ): std::stack<T>(src) {}

	MutantStack	&operator=( MutantStack const& rhs ) {
		std::stack<T>::operator=(rhs);
		return (*this);
	}
	class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
	
	private:
		T*	pointer;
		
	public:
		iterator(void) : pointer(0) {}
		iterator(T* x) : pointer(x) {}
		iterator(iterator const& src): pointer(src.pointer) {}
		
		iterator& operator=(iterator const& rhs) {
			this->pointer = rhs.pointer;
			return (*this);
		}

		iterator& operator++(void) {
			++pointer;
			return (*this);
		}
		iterator operator++(T) {
			iterator	temp(*this);
			operator++();
			return (temp);
		}
		iterator& operator--(void) {
			--pointer;
			return (*this);
		}
		iterator operator--(T) {
			iterator	temp(*this);
			operator--();
			return (temp);
		}

		bool	operator==(iterator const& rhs) const {
			return(pointer == rhs.p);
		}
		bool	operator!=(iterator const& rhs) const {
			return(pointer != rhs.p);
		}

		int& operator*(void) {
			return (*pointer);
		}
	};
	iterator	begin(void) {
		return iterator(*this);
	}
// 	iterator	end(void) {

// 	}
};

#endif /* MUTANTSTACK_HPP */
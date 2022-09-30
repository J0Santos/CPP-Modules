#ifndef Array_HPP
# define Array_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

template <typename T>
class Array {

private:
	int	_size;
	T*		_array;

public:
	Array( void ): _size(0), _array(new T()) {
	}

	Array(unsigned int n): _size(n), _array(new T[n]) {
	}

	Array( Array const& src ) {
		*this = src;
	}

	~Array( void ){
		delete[] this->_array;
	}

	Array	&operator=( Array const& rhs ) {
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		for (int i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	}

	int	size( void ) const {
		return (this->_size);
	}

	T&	operator[](int index) {
		if (index >= this->_size)
			throw std::exception();
		return (this->_array[index]);
	}

};

#endif /* Array_HPP */
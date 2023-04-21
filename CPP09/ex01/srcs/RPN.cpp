#include "RPN.hpp"

RPN::RPN( void ) {

}

RPN::RPN( RPN const& src ) {
	*this = src;
}

RPN::~RPN( void ) {

}


RPN&	RPN::operator=( RPN const& rhs ) {
	this->_stack = rhs._stack;
	return (*this);
}

void	RPN::pushToStack( int const& n ) {
	if (n > 10) {
		throw std::invalid_argument("Number is too big");
		exit(EXIT_SUCCESS);
	}
	this->_stack.push(n);
}

int	RPN::doOperation( char const& op ) {
	if (this->_stack.size() >= 2) {
		int n1 = this->_stack.top();
		this->_stack.pop();
		int n2 = this->_stack.top();
		this->_stack.pop();
		int res;
		switch (op) {
			case '+':
				res = n2 + n1;
				break;
			case '-':
				res = n2 - n1;
				break;
			case '*':
				res = n2 * n1;
				break;
			case '/':
				res = n2 / n1;
				break;
			default:
				throw std::invalid_argument("Invalid operation");
		}
		this->_stack.push(res);
		return (res);
	}
	else {
		throw std::invalid_argument("Invalid operation");
	}
}
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

# define LOG(x) std::cout << x << std::endl

class Form {

private:
	std::string const	name;
	bool				signStatus;
	int	const			signGrade;
	int const			execGrade;


public:
	Form( void ); /* Default constructor */
	Form( std::string newName, int signValue, int execValue );
	Form( Form const& src ); /* Copy constructor */
	~Form( void ); /* Destructor */

	Form	&operator=( Form const& rhs ); /* Copy assignment operator */

	std::string	getName() const;
	bool		getSignStatus() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	int		sanitizeGrade(int value);
	void	beSigned( Bureaucrat& b );

	struct GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	
	struct GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, Form const& form);

#endif /* FORM_HPP */
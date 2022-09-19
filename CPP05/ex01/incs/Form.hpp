#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

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
	void	beSigned( Bureaucrat& b ) throw (std::exception);

	class GradeTooHighException : public std::invalid_argument {
	
	public:
		int grade;
		GradeTooHighException(const char* what, int value): std::invalid_argument(what), grade(value)
		{
		}
	};
	
	class GradeTooLowException : public std::invalid_argument {

	public:
		int grade;
		GradeTooLowException( const char* what, int value ): std::invalid_argument(what), grade(value)
		{
		}
	};
};

std::ostream& operator<<(std::ostream &os, Form const& form);

#endif /* FORM_HPP */
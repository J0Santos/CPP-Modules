#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

# define LOG(x) std::cout << x << std::endl

class AForm {

private:
	std::string const	name;
	bool				signStatus;
	int	const			signGrade;
	int const			execGrade;


public:
	AForm( void ); /* Default constructor */
	AForm( std::string newName, int signValue, int execValue );
	AForm( AForm const& src ); /* Copy constructor */
	~AForm( void ); /* Destructor */

	AForm	&operator=( AForm const& rhs ); /* Copy assignment operator */

	std::string	getName() const;
	bool		getSignStatus() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	void		setSignStatus(bool value);

	int		sanitizeGrade(int value);
	virtual void	beSigned( Bureaucrat& b ) = 0;
	virtual void	execute( Bureaucrat const& executor ) const = 0;

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

	class FormNotSignedException : public std::invalid_argument {

	public:
		FormNotSignedException( const char* what): std::invalid_argument(what)
		{
		}
	};
};

std::ostream& operator<<(std::ostream &os, AForm const& form);

#endif /* AFORM_HPP */
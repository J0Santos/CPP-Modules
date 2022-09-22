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

	struct GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	
	struct GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

	struct FormNotSignedException : public std::exception {
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, AForm const& form);

#endif /* AFORM_HPP */
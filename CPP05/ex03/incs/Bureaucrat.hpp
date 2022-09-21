#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

# define LOG(x) std::cout << x << std::endl

class Bureaucrat {

private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat( void ); /* Default constructor */
	Bureaucrat( std::string name, int value );
	Bureaucrat( Bureaucrat const& src ); /* Copy constructor */
	~Bureaucrat( void ); /* Destructor */

	Bureaucrat	&operator=( Bureaucrat const& rhs ); /* Copy assignment operator */

	std::string	getName() const;
	int			getGrade() const;
	void		upgradeGrade();
	void		downgradeGrade();
	void		signForm( AForm &form );
	void		executeForm(AForm const& form);

	
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

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj);

#endif /* BUREAUCRAT_HPP */
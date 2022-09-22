#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

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
	void		signForm( Form &form );

	
	struct GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	
	struct GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj);

#endif /* BUREAUCRAT_HPP */
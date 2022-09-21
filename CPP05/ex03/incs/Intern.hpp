#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

# define LOG(x) std::cout << x << std::endl

class Intern {

private:
	AForm*	(Intern::*formArr[3])(std::string);
	AForm*	makeShrubberyForm(std::string target);
	AForm*	makeRobotomyForm(std::string target);
	AForm*	makePardonForm(std::string target);


public:
	Intern( void ); /* Default constructor */
	Intern( Intern const& src ); /* Copy constructor */
	~Intern( void ); /* Destructor */

	Intern	&operator=( Intern const& rhs ); /* Copy assignment operator */

	AForm*	makeForm(std::string formName, std::string target); 

	class FormDoesntExistException: public std::invalid_argument {

	public:
		FormDoesntExistException(const char* what): std::invalid_argument(what)
		{
		}
	};
};

#endif /* INTERN_HPP */
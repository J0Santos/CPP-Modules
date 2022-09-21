#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define LOG(x) std::cout << x << std::endl

class RobotomyRequestForm: public AForm {

private:
	std::string	target;

public:
	RobotomyRequestForm( void ); /* Default constructor */
	RobotomyRequestForm( std::string destination );
	RobotomyRequestForm( RobotomyRequestForm const& src ); /* Copy constructor */
	~RobotomyRequestForm( void ); /* Destructor */

	RobotomyRequestForm	&operator=( RobotomyRequestForm const& rhs ); /* Copy assignment operator */

	void	beSigned( Bureaucrat& b );
	void	execute( Bureaucrat const& executor ) const;

};

#endif /* ROBOTOMYREQUESTFORM_HPP */
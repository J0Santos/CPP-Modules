#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define LOG(x) std::cout << x << std::endl

class ShrubberyCreationForm: public AForm {

private:
	std::string	target;

public:
	ShrubberyCreationForm( void ); /* Default constructor */
	ShrubberyCreationForm( std::string destination );
	ShrubberyCreationForm( ShrubberyCreationForm const& src ); /* Copy constructor */
	~ShrubberyCreationForm( void ); /* Destructor */

	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const& rhs ); /* Copy assignment operator */

	void	beSigned( Bureaucrat& b );
	void	execute( Bureaucrat const& executor ) const;

};

#endif /* SHRUBBERYCREATIONFORM_HPP */
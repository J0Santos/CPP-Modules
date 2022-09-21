#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

# define LOG(x) std::cout << x << std::endl

class PresidentialPardonForm: public AForm {

private:
	std::string	target;

public:
	PresidentialPardonForm( void ); /* Default constructor */
	PresidentialPardonForm( std::string destination );
	PresidentialPardonForm( PresidentialPardonForm const& src ); /* Copy constructor */
	~PresidentialPardonForm( void ); /* Destructor */

	PresidentialPardonForm	&operator=( PresidentialPardonForm const& rhs ); /* Copy assignment operator */

	void	beSigned( Bureaucrat& b );
	void	execute( Bureaucrat const& executor ) const;

};

#endif /* PRESIDENTIALPARDONFORM_HPP */
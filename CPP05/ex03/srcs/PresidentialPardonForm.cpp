#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("Presidential Pardon Form", 25, 5)
{
	LOG("Created Presidential Pardon form");
}

PresidentialPardonForm::PresidentialPardonForm( std::string destination ): AForm("Presidential Pardon Form", 25, 5), target(destination)
{
	LOG("Created Presidential Pardon form to " << target);
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& src )
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	LOG("Form is gone");
}


PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const& rhs )
{
	this->target = rhs.target;
	return (*this);
}

void	PresidentialPardonForm::beSigned( Bureaucrat& b )
{
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException("Grade too low to sign form", b.getGrade());
	this->setSignStatus(true);
}

void	PresidentialPardonForm::execute( Bureaucrat const& executor ) const {

	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException("Grade too low to execute form", executor.getGrade());
	else if (this->getSignStatus() == false)
		throw FormNotSignedException(" hasn't been signed yet");
	LOG(this->target << " has been pardoned by Zaphod Beeblebrox.");
}
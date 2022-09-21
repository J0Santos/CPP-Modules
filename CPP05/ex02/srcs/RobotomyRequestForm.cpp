#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("Robotomy Request Form", 72, 45)
{
	LOG("Created shrubbery form");
}

RobotomyRequestForm::RobotomyRequestForm( std::string destination ): AForm("Robotomy Request Form", 72, 45), target(destination)
{
	LOG("Created shrubbery form to " << target);
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& src )
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	LOG("Form is gone");
}


RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const& rhs )
{
	this->target = rhs.target;
	return (*this);
}

void	RobotomyRequestForm::beSigned( Bureaucrat& b )
{
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException("Grade too low to sign form", b.getGrade());
	this->setSignStatus(true);
}

void	RobotomyRequestForm::execute( Bureaucrat const& executor ) const {

	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException("Grade too low to execute form", executor.getGrade());
	srand(time(NULL));
	int happens = std::rand() % 2;
	LOG(happens);
	LOG("BRZZZZZZZZZZZ BRZZZ BRZZZZZZZZ *some drilling noises*");
	
}
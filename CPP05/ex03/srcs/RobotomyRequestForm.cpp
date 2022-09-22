#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("Robotomy Request Form", 72, 45)
{
	LOG("Created Robotomy form");
}

RobotomyRequestForm::RobotomyRequestForm( std::string destination ): AForm("Robotomy Request Form", 72, 45), target(destination)
{
	LOG("Created Robotomy form to " << target);
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
		throw GradeTooLowException();
	this->setSignStatus(true);
}

void	RobotomyRequestForm::execute( Bureaucrat const& executor ) const {

	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else if (this->getSignStatus() == false)
		throw FormNotSignedException();
	LOG("BRZZZZZZZZZZZ BRZZZ BRZZZZZZZZ *some drilling noises*");
	srand(time(NULL));
	int happens = std::rand() % 2;
	if (happens == 0)
		LOG(this->target << " has been robotomized successfully!");
	else
		LOG("Robotomization of target " << this->target << " failed");
}
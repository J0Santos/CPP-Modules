#include "Form.hpp"

Form::Form( void ): name("default"), signStatus(false), signGrade(150), execGrade(150)
{
	LOG("Form created");
}

Form::Form( std::string newName, int signValue, int execValue ): name(newName), signGrade(sanitizeGrade(signValue)), execGrade(sanitizeGrade(execValue))
{
	this->signStatus = false;
}
Form::Form( Form const& src ):name(src.name), signStatus(src.signStatus), signGrade(src.signGrade), execGrade(src.execGrade)
{
}

Form::~Form( void )
{
	LOG("Form deleted");
}

std::string	Form::getName( void ) const {
	return(this->name);
}

bool	Form::getSignStatus( void ) const {
	return this->signStatus;
}

int	Form::getSignGrade( void ) const {
	return this->signGrade;
}

int	Form::getExecGrade( void ) const {
	return this->execGrade;
}

int	Form::sanitizeGrade(int value){
	try {
		if (value > 150)
			throw GradeTooLowException("Grade too low, changed to default 150", value);
		else if (value < 1)
			throw GradeTooHighException("Grade to high, changed to default 1", value);
	}
	catch (const GradeTooLowException& e) {
		LOG(e.what());
		return (150);
	}
	catch (const GradeTooHighException& e) {
		LOG(e.what());
		return (1);
	}
	return (value);
}

void	Form::beSigned( Bureaucrat& bureaucrat ) throw (std::exception) {
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException("Grade too low to sign form", bureaucrat.getGrade());
	this->signStatus = true;
}

Form&	Form::operator=( Form const& rhs )
{
	this->signStatus = rhs.signStatus;
	return *this;
}

std::ostream& operator<<(std::ostream &os, Form const& form) {
	os << form.getName() << " needs grade " << form.getSignGrade() << " to sign and " << form.getExecGrade() << " to execute. Current status: " << form.getSignStatus();
	return os;
}

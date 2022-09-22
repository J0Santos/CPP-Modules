#include "Form.hpp"

Form::Form( void ): name("default"), signStatus(false), signGrade(150), execGrade(150)
{
	LOG("Form created " << this->name);
}

Form::Form( std::string newName, int signValue, int execValue ): name(newName), signGrade(sanitizeGrade(signValue)), execGrade(sanitizeGrade(execValue))
{
	this->signStatus = false;
	LOG("Form created " << this->name);
}

Form::Form( Form const& src ):name(src.name), signStatus(src.signStatus), signGrade(src.signGrade), execGrade(src.execGrade)
{
}

Form::~Form( void )
{
	LOG(this->name << " deleted");
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

const char*	Form::GradeTooHighException::what(void) const throw() {
	return("Grade too high");
}

const char*	Form::GradeTooLowException::what(void) const throw() {
	return("Grade too low");
}

int	Form::sanitizeGrade(int value){
	try {
		if (value > 150)
			throw GradeTooLowException();
		else if (value < 1)
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e) {
		LOG(e.what() << "Changed to default 150");
		return (150);
	}
	catch (const GradeTooHighException& e) {
		LOG(e.what() << "Changed to default 1");
		return (1);
	}
	return (value);
}

void	Form::beSigned( Bureaucrat& bureaucrat ) {
	if (bureaucrat.getGrade() > this->signGrade)
		throw GradeTooLowException();
	this->signStatus = true;
}

Form&	Form::operator=( Form const& rhs )
{
	const_cast<std::string&>(this->name) = rhs.name;
	*const_cast<int*>(&(this->signGrade)) = rhs.signGrade;
	*const_cast<int*>(&(this->execGrade)) = rhs.execGrade;
	this->signStatus = rhs.signStatus;
	return *this;
}

std::ostream& operator<<(std::ostream &os, Form const& form) {
	os << form.getName() << " needs grade " << form.getSignGrade() << " to sign and " << form.getExecGrade() << " to execute. Current status: " << form.getSignStatus();
	return os;
}

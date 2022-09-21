#include "AForm.hpp"

AForm::AForm( void ): name("default"), signStatus(false), signGrade(150), execGrade(150)
{
	LOG("Form created");
}

AForm::AForm( std::string newName, int signValue, int execValue ): name(newName), signGrade(sanitizeGrade(signValue)), execGrade(sanitizeGrade(execValue))
{
	this->signStatus = false;
}
AForm::AForm( AForm const& src ):name(src.name), signStatus(src.signStatus), signGrade(src.signGrade), execGrade(src.execGrade)
{
}

AForm::~AForm( void )
{
	LOG("Form deleted");
}

std::string	AForm::getName( void ) const {
	return(this->name);
}

bool	AForm::getSignStatus( void ) const {
	return this->signStatus;
}

int	AForm::getSignGrade( void ) const {
	return this->signGrade;
}

int	AForm::getExecGrade( void ) const {
	return this->execGrade;
}

void	AForm::setSignStatus( bool value ) {
	this->signStatus = value;
}

int	AForm::sanitizeGrade(int value){
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

// void	Form::beSigned( Bureaucrat& bureaucrat ) {
// 	if (bureaucrat.getGrade() > this->signGrade)
// 		throw GradeTooLowException("Grade too low to sign form", bureaucrat.getGrade());
// 	this->signStatus = true;
// }

AForm&	AForm::operator=( AForm const& rhs )
{
	this->signStatus = rhs.signStatus;
	return *this;
}

std::ostream& operator<<(std::ostream &os, AForm const& form) {
	os << form.getName() << " needs grade " << form.getSignGrade() << " to sign and " << form.getExecGrade() << " to execute. Current status: " << form.getSignStatus();
	return os;
}

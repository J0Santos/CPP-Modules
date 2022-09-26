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

const char*	AForm::GradeTooHighException::what(void) const throw() {
	return("Grade too high");
}

const char*	AForm::GradeTooLowException::what(void) const throw() {
	return("Grade too low");
}

const char*	AForm::FormNotSignedException::what(void) const throw() {
	return(" has not been signed");
}

const char*	AForm::AlreadySignedException::what(void) const throw() {
	return(" already has a signature");
}

int	AForm::sanitizeGrade(int value){
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

void	AForm::beSigned( Bureaucrat& b ) {
	if (b.getGrade() > this->signGrade)
		throw GradeTooLowException();
	else if (this->getSignStatus() == true)
		throw AlreadySignedException();
	this->signStatus = true;
}

AForm&	AForm::operator=( AForm const& rhs )
{
	const_cast<std::string&>(this->name) = rhs.name;
	*const_cast<int*>(&(this->signGrade)) = rhs.signGrade;
	*const_cast<int*>(&(this->execGrade)) = rhs.execGrade;
	this->signStatus = rhs.signStatus;
	return *this;
}

std::ostream& operator<<(std::ostream &os, AForm const& form) {
	os << form.getName() << " needs grade " << form.getSignGrade() << " to sign and " << form.getExecGrade() << " to execute. Current status: " << form.getSignStatus();
	return os;
}

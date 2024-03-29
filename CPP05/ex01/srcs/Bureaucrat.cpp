#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	LOG("Bureaucrat created");
}

Bureaucrat::Bureaucrat( std::string newName, int value ): name(newName)
{
	LOG("Bureaucrat shows up");
	if (value > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (value < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade = value;
}

Bureaucrat::Bureaucrat( Bureaucrat const& src )
{
	LOG("Bureaucrat created");
	*this = src;
}

Bureaucrat::~Bureaucrat( void )
{
	LOG("Bureaucrat gone");
}

Bureaucrat&	Bureaucrat::operator=( Bureaucrat const& rhs )
{
	this->grade = rhs.grade;
	const_cast<std::string&>(this->name) = rhs.name;
	return (*this);
}

int Bureaucrat::getGrade( void ) const
{
	return this->grade;
}

std::string Bureaucrat::getName( void ) const
{
	return this->name;
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw() {
	return("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return("Grade too low");
}

void	Bureaucrat::downgradeGrade( void )
{
	try {
		if (grade == 150)
			throw (Bureaucrat::GradeTooLowException());
		this->grade++;
		LOG("Downgrade successful");
	}
	catch (const GradeTooLowException& e) {
		LOG(e.what() << " Can't downgrade further");
	}
}

void	Bureaucrat::upgradeGrade( void )
{
	try {
		if (grade == 1)
				throw (Bureaucrat::GradeTooHighException());
		this->grade--;
		LOG("Upgrade successful");
		}
	catch (const GradeTooHighException& e) {
		LOG(e.what() << " Can't upgrade further");
	}
}

void	Bureaucrat::signForm( Form &form ) {
	try {
		form.beSigned(*this);
		LOG(this->name << " signed " << form.getName());
	}
	catch ( Form::GradeTooLowException& e ) {
		LOG(this->name << " couldn't sign " << form.getName() << " because " << e.what());
	}
	catch (Form::AlreadySignedException& e) {
		LOG(this->name << " couldn't sign " << form.getName() << " because form is " << e.what());
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj){
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

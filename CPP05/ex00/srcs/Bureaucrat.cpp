#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): name("default"), grade(150)
{
	LOG("Bureaucrat created");
}

Bureaucrat::Bureaucrat( std::string newName, int value ): name(newName)
{
	LOG("Bureaucrat " << this->name << " shows up");
	if (value > 150)
	{
		this->grade = 150;
		throw (Bureaucrat::GradeTooLowException());
	}
	else if (value < 1)
	{
		this->grade = 1;
		throw (Bureaucrat::GradeTooHighException());
	}
	this->grade = value;
}

Bureaucrat::Bureaucrat( Bureaucrat const& src )
{
	LOG("Copy constructor called");
	*this = src;
}

Bureaucrat::~Bureaucrat( void )
{
	LOG("Bureaucrat " << this->name << " gone");
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
	if (grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade++;
	LOG("Downgrade successful");
}

void	Bureaucrat::upgradeGrade( void )
{
	if (grade == 1)
			throw (Bureaucrat::GradeTooHighException());
	this->grade--;
	LOG("Upgrade successful");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj){
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

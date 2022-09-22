#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): name("default"), grade(150)
{
	LOG("Bureaucrat created");
}

Bureaucrat::Bureaucrat( std::string newName, int value ): name(newName)
{
	LOG("Bureaucrat shows up");
	try {
		if (value > 150)
		{
			this->grade = 150;
			throw (Bureaucrat::GradeTooLowException("Grade value too low. Changed to default 150", value));
		}
		else if (value < 1)
		{
			this->grade = 1;
			throw (Bureaucrat::GradeTooHighException("Grade value is too high. Changed to default value 1", value));
		}
		this->grade = value;
	}
	catch (const GradeTooHighException& e) {
		LOG(e.what() << " Value must between 1-150: " << e.grade);
	}
	catch (const GradeTooLowException& e) {
		LOG(e. what() << " Value must be between 1-150: " << e.grade);
	}
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

void	Bureaucrat::downgradeGrade( void )
{
	try {
		if (grade == 150)
			throw (Bureaucrat::GradeTooLowException("Grade value is already the lowest possible: 150.", grade));
		this->grade++;
	}
	catch (const GradeTooLowException& e) {
		LOG(e.what() << " Can't downgrade further: " << e.grade);
	}

}

void	Bureaucrat::upgradeGrade( void )
{
	try {
		if (grade == 1)
				throw (Bureaucrat::GradeTooHighException("Grade value is already the highest possible.", grade));
		this->grade--;
		}
	catch (const GradeTooHighException& e) {
		LOG(e.what() << " Can't upgrade further: " << grade);
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj){
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

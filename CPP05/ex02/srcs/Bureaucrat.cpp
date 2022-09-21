#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	LOG("Bureaucrat created");
}

Bureaucrat::Bureaucrat( std::string newName, int value ): name(newName)
{
	LOG("Bureaucrat shows up");
	try {
		if (value > 150)
			throw (Bureaucrat::GradeTooLowException("Grade value too low.", value));
		else if (value < 1)
			throw (Bureaucrat::GradeTooHighException("Grade value is too high", value));
		this->grade = value;
		
	}
	catch (const GradeTooHighException& e) {
		LOG(e.what() << " Value must between 1-150. Changed to default 1: " << e.grade);
		this->grade = 1;
	}
	catch (const GradeTooLowException& e) {
		LOG(e. what() << " Value must be between 1-150. Changed to default 150: " << e.grade);
		this->grade = 150;
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
	static_cast<std::string>(this->name) = rhs.name;
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

void	Bureaucrat::signForm( AForm &form ) {
	try {
		form.beSigned(*this);
		LOG(this->name << " signed " << form.getName());
	}
	catch ( AForm::GradeTooLowException& e ) {
		LOG(this->name << " couldn't sign " << form.getName() << " because " << e.what());
	}
}

void	Bureaucrat::executeForm(AForm const& form) {
	try {
		form.execute(*this);
		LOG(this->name << " executed " << form.getName());
	}
	catch (AForm::GradeTooLowException& e) {
		LOG(this->name << " couldn't execute form " << form.getName() << " because " << e.what());
	}
}


std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj){
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

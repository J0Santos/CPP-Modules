#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	LOG("Bureaucrat created");
}

Bureaucrat::Bureaucrat( std::string name, int grade ): name(name)
{
	try {
		if (grade < 1 || grade > 150)
			throw ();
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

int Bureaucrat::getGrade( void )
{
	return this->grade;
}

std::string Bureaucrat::getName( void )
{
	return this->name;
}

void	Bureaucrat::downgradeGrade( void )
{
	this->grade++;
}

void	Bureaucrat::upgradeGrade( void ) {
	this->grade--;
}

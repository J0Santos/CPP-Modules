#include "Intern.hpp"

Intern::Intern( void )
{
	this->formArr[0] = &Intern::makeShrubberyForm;
	this->formArr[1] = &Intern::makeRobotomyForm;
	this->formArr[2] = &Intern::makePardonForm;
}

Intern::Intern( Intern const& src )
{
	*this = src;
}

Intern::~Intern( void )
{
}

Intern&	Intern::operator=( Intern const& rhs )
{
	(void)rhs;
	return (*this);
}

AForm*	Intern::makeShrubberyForm(std::string target) {

	return (new	ShrubberyCreationForm(target));
}

AForm*	Intern::makeRobotomyForm(std::string target) {

	return (new	RobotomyRequestForm(target));
}

AForm*	Intern::makePardonForm(std::string target) {

	return (new	PresidentialPardonForm(target));
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	const char* names[3] = {"Shrubbery Creation Form", "Robotomy Request Form", "Presidential Pardon Form"};
	int i;

	for (i = 0; i < 3; i++) {
		if (formName.compare(names[i]) == 0)
			break ;
	}
	try {
		if (i == 3)
			throw FormDoesntExistException("Form name doesn't exist");
		LOG("Intern creates " << formName);
		return ((this->*formArr[i])(target));
	}
	catch (FormDoesntExistException& e) {
		LOG(e.what());
	}
	return NULL;
}

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main( void )
{
	LOG("Bureaucrats:");
	Bureaucrat a;
	Bureaucrat b;
	LOG("Bureaucrats:");
	try {
		a = Bureaucrat("Carlos", 150);
		LOG(a);
		b = Bureaucrat("Jorge", 1);
		LOG(b);
		// Bureaucrat c = Bureaucrat("Andreia", 189); /* Comment this to keep testing */
		// LOG(c); /* Comment this to keep testing */
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		LOG(e.what() << " Value must between 1-150.");
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		LOG(e. what() << " Value must be between 1-150.");
	}
	LOG("");
	LOG("");

	LOG("");
	LOG("Forms:");
	LOG("");
	ShrubberyCreationForm s1("house");
	RobotomyRequestForm r1("Sara");
	PresidentialPardonForm p1("sara");
	PresidentialPardonForm p2;

	LOG("");
	p2 = p1;
	LOG("p2: " << p2);

	LOG("");

	b.executeForm(p1);
	b.signForm(s1);
	b.signForm(s1);
	b.signForm(r1);
	b.signForm(p1);
	a.executeForm(p1);
	b.executeForm(p1);
	b.executeForm(r1);
	b.executeForm(s1);
	b.executeForm(s1);
	b.executeForm(s1);

}
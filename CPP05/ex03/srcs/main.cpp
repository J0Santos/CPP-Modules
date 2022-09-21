# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"
int	main( void )
{
	LOG("Intern:");

	Intern	i;

	i.makeForm("sdfs", "bajoras");
	i.makeForm("Shrubbery Creation Form", "balelas");

	// LOG("Bureaucrats:");
	// Bureaucrat a = Bureaucrat("Carlos", 143);
	// Bureaucrat b = Bureaucrat("Jorge", 1);
	// Bureaucrat c = Bureaucrat("Andreia", 189);

	// b.upgradeGrade();
	// LOG(a.getGrade());
	// LOG(a.getName());
	// a.downgradeGrade();
	// LOG(a.getGrade());
	// a.upgradeGrade();
	// LOG(a.getGrade());
	// LOG(b);
	// LOG(c);

	// LOG("");
	// LOG("Forms:");
	
	// // ShrubberyCreationForm s1 = ShrubberyCreationForm("house");
	// RobotomyRequestForm r1 = RobotomyRequestForm("Sara");
	// PresidentialPardonForm p1 = PresidentialPardonForm("Sara");

	// AForm	n1 = AForm();
	// AForm	n2 = AForm("B3", 180, 130);
	// AForm	n3 = AForm("A1", 80, 2);

	// b.signForm(r1);
	// b.executeForm(r1);
	// a.signForm(r1);
	// a.executeForm(r1);
	// b.executeForm(p1);
	// b.signForm(p1);
	// b.executeForm(p1);

	// LOG("");
	// LOG(n1);
	// LOG(n2);
	// LOG(n2);
	// c.signForm(n2);
	// LOG(n3);
	// c.signForm(n3);
	// b.signForm(n3);
	// LOG(n3);

}
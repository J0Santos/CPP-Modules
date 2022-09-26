# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main( void )
{
	LOG("Bureaucrats:");
	try {
		Bureaucrat a = Bureaucrat("Carlos", 150);
		LOG(a);
		Bureaucrat b = Bureaucrat("Jorge", 1);
		LOG(b);
		// Bureaucrat c = Bureaucrat("Andreia", 189); /* Comment this to keep testing */
		// LOG(c); /* Comment this to keep testing */
		b.upgradeGrade();
		LOG(b.getName() << ": " << b.getGrade());
		a.downgradeGrade();
		LOG(a.getName() << ": " << a.getGrade());
		a.upgradeGrade();
		LOG(a.getName() << ": " << a.getGrade());
		LOG(b);
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		LOG(e.what() << " Value must between 1-150.");
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		LOG(e. what() << " Value must be between 1-150.");
	}

	LOG("");
	LOG("Forms:");
	Bureaucrat a = Bureaucrat("Carlos", 150);
	LOG(a);
	Bureaucrat b = Bureaucrat("Jorge", 1);
	LOG(b);
	Form	n1 = Form();
	Form	n2 = Form("N2", 180, 130);
	Form	n3 = Form("N3", 80, 2);
	Form	t1;


	LOG("");
	LOG(n1);
	LOG(n3);
	b.signForm(n3);
	b.signForm(n3);
	LOG(n3);
	t1 = n3;
	LOG("t1: " << t1);



}
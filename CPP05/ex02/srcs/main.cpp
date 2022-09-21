# include "Bureaucrat.hpp"
# include "AForm.hpp"

int	main( void )
{
	LOG("Bureaucrats:");
	Bureaucrat a = Bureaucrat("Carlos", 150);
	Bureaucrat b = Bureaucrat("Jorge", 1);
	Bureaucrat c = Bureaucrat("Andreia", 189);

	b.upgradeGrade();
	LOG(a.getGrade());
	LOG(a.getName());
	a.downgradeGrade();
	LOG(a.getGrade());
	a.upgradeGrade();
	LOG(a.getGrade());
	LOG(b);
	LOG(c);

	LOG("");
	LOG("Forms:");
	Form	n1 = Form();
	Form	n2 = Form("B3", 180, 130);
	Form	n3 = Form("A1", 80, 2);

	LOG("");
	LOG(n1);
	LOG(n2);
	LOG(n2);
	c.signForm(n2);
	LOG(n3);
	c.signForm(n3);
	b.signForm(n3);
	LOG(n3);



}
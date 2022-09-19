# include "Bureaucrat.hpp"
# include "Form.hpp"

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

	LOG("");
	LOG("Forms:");
	Form	n1 = Form();
	Form	n2 = Form("B3", 180, 130);

	LOG(n1);
	LOG(n2);
	n2.beSigned(a);
	LOG(n2);

}
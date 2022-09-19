# include "Bureaucrat.hpp"

int	main( void )
{
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

}
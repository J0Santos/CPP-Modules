# include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat a;
	Bureaucrat b;
	Bureaucrat c;
	Bureaucrat d;

	try {
		a = Bureaucrat("Carlos", 150);
		b = Bureaucrat("Jorge", 1);
		//c = Bureaucrat("Andreia", 189);
		d = Bureaucrat("Anibal" , -58);
	}
	catch (const std::exception& e) {
		LOG(e.what());
	}
	d = a;
	//LOG(c);
	LOG(b);
	LOG(d);
	LOG("");
	LOG("");
	LOG("");
	try {
		LOG(a.getName() << ": " << a.getGrade());
		a.upgradeGrade();
		LOG(a.getName() << ": " << a.getGrade());
		a.downgradeGrade();
		LOG(a.getName() << ": " << a.getGrade());
		a.downgradeGrade();
		LOG(a.getGrade());
		b.upgradeGrade();
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		LOG(e.what() << ". Can't downgrade further");
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		LOG(e.what() << ". Can't upgrade further");
	}
	LOG(a.getName() << ": " << a.getGrade());
}
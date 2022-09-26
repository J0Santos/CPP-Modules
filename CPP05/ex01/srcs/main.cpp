# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main( void )
{
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
	LOG("Forms:");
	Form n1;
	Form n2;
	Form n3;
	Form n4;
		
	n1 = Form();
	n2 = Form("N2", 180, 130);
	n3 = Form("N3", 80, 2);


	LOG("");
	LOG(n1);
	LOG(n3);
	a.signForm(n3);
	b.signForm(n3);
	b.signForm(n3);
	LOG(n3);
	n4 = n2;
	LOG("n4: " << n4);



}
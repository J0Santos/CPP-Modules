#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class Bureaucrat {

private:
	const std::string	name;
	int					grade;

public:
	Bureaucrat( void ); /* Default constructor */
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const& src ); /* Copy constructor */
	~Bureaucrat( void ); /* Destructor */

	Bureaucrat	&operator=( Bureaucrat const& rhs ); /* Copy assignment operator */

	std::string	getName();
	int			getGrade();
	void		upgradeGrade();
	void		downgradeGrade();

};

#endif /* BUREAUCRAT_HPP */
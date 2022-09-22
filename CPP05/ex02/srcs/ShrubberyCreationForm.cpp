#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("Shrubbery Creation Form", 145, 137)
{
	LOG("Created shrubbery form");
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string destination ): AForm("Shrubbery Creation Form", 145, 137), target(destination)
{
	LOG("Created shrubbery form to " << target);
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const& src )
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	LOG("Form is gone");
}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const& rhs )
{
	this->target = rhs.target;
	return (*this);
}

void	ShrubberyCreationForm::beSigned( Bureaucrat& b )
{
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->setSignStatus(true);
}

void	ShrubberyCreationForm::execute( Bureaucrat const& executor ) const {

	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else if (this->getSignStatus() == false)
		throw FormNotSignedException();
	std::string fileName = this->target + "_shrubbery";
	std::ofstream file(fileName.c_str(), std::ios::app);
	file << std::endl <<
	"                         ..::;;oo::                                        " << std::endl  <<
	"					::\%\%##@@\%\%xx##                                       " << std::endl  << 
	"					::##::..oo;;  ##..                                      " << std::endl  <<
	"					xx::    ;;;;  \%\%,,..xx######xx,,                       " << std::endl  << 
	"					\%\%..    ::;;  oo\%\%##oo..xx;;oo##::      ..           " << std::endl  <<   
	"					\%\%      ,,;;  ;;@@::    oo..  \%\%##oo####@@,,         " << std::endl  <<   
	"				oooo\%\%        ;;  ,,\%\%      oo  ;;::####ooxx##..         " << std::endl  <<   
	"			oo@@@@xx        ;;            oo  ..  xxxx::\%\%..              " << std::endl  <<
	"			..@@ooxxxx        ;;          ..;;      ::\%\%##,,               " << std::endl  << 
	"			;;xx::..oo        oo          ..::      ..@@@@;;                " << std::endl  <<
	"			xx,,..  ;;        xx::        ....        ,,xx##                " << std::endl  <<
	"			\%\%..    ,,        ,,oo                      oo##,,             " << std::endl  << 
	"			\%\%                  ,,..                  ,,;;@@::             " << std::endl  << 
	"			\%\%..                                        ;;\%\%::           " << std::endl  <<   
	"			\%\%,,                                        ::\%\%..           " << std::endl  <<   
	"			xx::                                        ,,xx                " << std::endl  <<
	"			;;oo                                        ,,oo                " << std::endl  <<
	"			::xx    ::oo##xx                ;;xx##;;    ;;::                " << std::endl  <<
	"			..\%\%  ::,,  ::@@xx            ;;    \%\%@@::  xx,,             " << std::endl  <<   
	"			\%\%  oo,,  ::@@@@..        ..xx    \%\%@@xx  \%\%               " << std::endl  <<   
	"			\%\%,,oo##oo####@@..        ..@@xxxx##@@xx..xx                  " << std::endl  <<
	"			oo;;::@@@@##xxxx            xx@@@@oo\%\%,,::oo                  " << std::endl  <<
	"			::xx  ::####oo                xx##\%\%::  oo;;                  " << std::endl  <<
	"			..\%\%                    ....            \%\%..                 " << std::endl  << 
	"				xx;;          \%\%####@@@@##..        ::xx                   " << std::endl  << 
	"				,,##..        \%\%@@@@\%\%\%\%##        ..\%\%..             " << std::endl  <<       
	"			\%\%\%\%@@##::      ,,@@##,,::,,      ,,##\%\%                   " << std::endl  <<   
	"			..##oo;;\%\%@@xx,,    ..::::..    ,,xx@@@@@@;;                   " << std::endl  << 
	"			..@@xx..;;##::xx\%\%oo;;;;oooooo\%\%##;;xx::\%\%,,               " << std::endl  <<     
	"			..\%\%xx\%\%@@;;  ;;;;  ,,\%\%xx..  ,,\%\%,,::\%\%oo             " << std::endl  <<         
	"				;;\%\%    oo..      ..      xx    xxoo                      " << std::endl  <<
	"				##;;::oo\%\%      ..,,      \%\%oo  ..##,,                   " << std::endl  << 
	"				;;####;;,,\%\%..    ..;;      \%\%oo::,,xx##xxxx             " << std::endl  <<   
	"				\%\%::oo..,,xx;;oo;;ooxxooxxoo##oo::\%\%####xx;;             " << std::endl  <<   
	"		..\%\%\%\%\%\%,,;;..;;;;..xx      ..;;  ;;xx..::;;xx\%\%             " << std::endl  <<     
	"		,,\%\%\%\%\%\%;;::,,xx::::xx      ::oo  ;;\%\%  ,,,,::\%\%           " << std::endl  <<       
	"			xx\%\%ooxx  ;;##::,,oo..      ,,  xx@@,,::  ..\%\%,,             " << std::endl  <<   
	"			oooo,,;;  \%\%@@xx,,..oooo,,::..,,xx@@xx,,    xxoo               " << std::endl  << 
	"			xx::..::  \%\%@@;;..  ::::,,xx::::xx@@##      ooxx               " << std::endl  << 
	"			\%\%..  ,,  \%\%@@,,;;\%\%xx    ;;xxxxxx@@\%\%      ;;\%\%       " << std::endl  <<         
	"			\%\%::,,::,,##@@..  ::,,xx\%\%\%\%,,  ;;####....  \%\%\%\%       " << std::endl  <<         
	"			,,\%\%@@\%\%##@@@@..  ..  ####,,    ::@@##\%\%\%\%xx##,,         " << std::endl  <<       
	"				::oo;;::##oo::::oo@@@@xx;;,,xx@@::;;oo;;..                  " << std::endl  <<
	"					..\%\%  ......####::oo,,..\%\%,,                         " << std::endl  << 
	"					..\%\%        ####,,..    \%\%,,                         " << std::endl  << 
	"					..##oo::xxoo@@@@\%\%\%\%::oo##..                         " << std::endl  << 
	"						,,ooxxxxoo,,,,oo\%\%\%\%xx,,                           ";
}
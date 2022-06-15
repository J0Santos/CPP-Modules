#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	LOG("I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!");
}

void	Harl::info(void)
{
	LOG("I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!");
}

void	Harl::warning(void)
{
	LOG(" think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month.");
}

void	Harl::error(void)
{
	LOG("This is unacceptable! I want to speak to the manager now.");
}

void	Harl::complain(std::string level)
{
	void	(Harl::*funcArr[4])(void) = {
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error};
}
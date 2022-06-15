#include "Harl.hpp"

Harl::Harl(void)
{
	this->funcArr[0] = &Harl::debug;
	this->funcArr[1] = &Harl::info;
	this->funcArr[2] = &Harl::warning;
	this->funcArr[3] = &Harl::error;
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	LOG("[ DEBUG ]");
	LOG("I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n");
}

void	Harl::info(void)
{
	LOG("[ INFO ]");
	LOG("I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n");
}

void	Harl::warning(void)
{
	LOG("[ WARNING ]");
	LOG("I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n");
}

void	Harl::error(void)
{
	LOG("[ ERROR ]");
	LOG("This is unacceptable! I want to speak to the manager now.\n");
}

void	Harl::complain(std::string level)
{
	std::string		arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//void			(Harl::*funcArr[4])(void);
	
	int i = 0;

	while (i < 4)
	{
		if (level.compare(arr[i]) == 0)
			(this->*funcArr[i])();
		i++;
	}
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (level.compare(arr[i]) == 0)
	// 		(this->*funcArr[i])();
	// }
}

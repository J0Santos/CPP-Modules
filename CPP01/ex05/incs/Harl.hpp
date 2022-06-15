#ifndef HARL_HPP
# define HARL_HPP

# include "string.h"
# include "iostream"

# define LOG(x) std::cout << x << std::endl
class Harl 
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		
		typedef void (Harl::*f)(void);
		f		funcArr[4];

	public:
		Harl();
		~Harl();
		void	complain(std::string level);

};

#endif /* HARL_HPP */

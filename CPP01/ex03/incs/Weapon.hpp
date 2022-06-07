#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# ifndef LOG
#  define LOG(x) std::cout << x << std::endl
# endif /* LOG */

class Weapon {

private:
	std::string	type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType();
	void	setType(std::string newType);

};

#endif /* WEAPON_HPP */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# ifndef LOG
#  define LOG(x) std::cout << x << std::endl;
# endif /* LOG */

class Weapon {

private:
	std::string	type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const	&getType();
	void	setType(std::string type);

}

#endif /* WEAPON_HPP */
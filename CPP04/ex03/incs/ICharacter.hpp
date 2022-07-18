#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

# define LOG(x) std::cout << x << std::endl

class ICharacter {
	private:


	public:
		virtual ~ICharacter( void ) {} /* Destructor */
		virtual	std::string const&	getName() const = 0;
		virtual void	equip( AMateria* m) = 0;
		virtual void	unequip(int idx ) = 0;
		virtual	void	use(int idx, ICharacter& target) = 0;
};

#endif /* ICHARACTER_HPP */
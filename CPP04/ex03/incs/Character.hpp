#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

# define LOG(x) std::cout << x << std::endl

class Character: ICharacter {
	private:
		std::string	_name;

	public:
		AMateria	*inventory[4];
		Character( void ); /* Default constructor */
		Character( std::string name );
		Character( Character const& src ); /* Copy constructor */
		Character	&operator=( Character const& rhs ); /* Copy assignment operator */
		~Character( void ); /* Destructor */

		std::string const&	getName( void ) const;
		void	equip( AMateria* m );
		void	unequip( int idx );
		void	use(int idx, ICharacter& target );
		int	inventSlot( void );


};

#endif /* CHARACTER_HPP */
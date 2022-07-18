#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

# define LOG(x) std::cout << x << std::endl

class Ice: AMateria
{
	private:


	public:
		Ice( void ); /* Default constructor */
		Ice( Ice const& src ); /* Copy constructor */
		~Ice( void ); /* Destructor */

		Ice	&operator=( Ice const& rhs ); /* Copy assignment operator */
		void	use( ICharacter& target );
		AMateria* clone( void ) const;
};

#endif /* ICE_HPP */
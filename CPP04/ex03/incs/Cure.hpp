#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

# define LOG(x) std::cout << x << std::endl

class Cure: AMateria 
{
	private:


	public:
		Cure( void ); /* Default constructor */
		Cure( Cure const& src ); /* Copy constructor */
		~Cure( void ); /* Destructor */

		Cure	&operator=( Cure const& rhs ); /* Copy assignment operator */

		void	use( ICharacter& target );
		AMateria* clone( void ) const;
};

#endif /* CURE_HPP */
#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>

# define LOG(x) std::cout << x << std::endl

class AMateria {

	protected:
		std::string	type;


	public:
		AMateria( void ); /* Default constructor */
		AMateria( std::string const& type );
		AMateria( AMateria const& src ); /* Copy constructor */
		~AMateria( void ); /* Destructor */

		AMateria	&operator=( AMateria const& rhs ); /* Copy assignment operator */

		std::string const& getType( void ) const;
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );

};

#endif /* AMateria_HPPA */
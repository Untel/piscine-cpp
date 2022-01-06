#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		// Missing virtual here will throw an error if we try to delete
		~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );

		void			makeSound() const;

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ******************************************************** WRONGCAT_H */
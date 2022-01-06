#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src );
		// Missing virtual here will throw an error if we try to delete
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );
		std::string			getType() const;
		void				makeSound() const;

	protected:
		std::string		type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ***************************************************** WRONGANIMAL_H */
#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

class Cure : public AMateria
{
	private:
	public:
		Cure();
		Cure(Cure const &src);
		virtual ~Cure();

		Cure &			operator = (Cure const &rhs);
		Cure *			clone() const;
		virtual void	use(ICharacter &target);
};

std::ostream &			operator << (std::ostream &o, Cure const &i);

#endif /* ************************************************************ CURE_H */
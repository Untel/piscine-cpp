#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	public:
		Cure();
		Cure(Cure const &src);
		Cure(Cure &src);
		virtual ~Cure();

		Cure &			operator = (Cure const &rhs);

		Cure *			clone() const;
};

std::ostream &			operator << (std::ostream &o, Cure const &i);

#endif /* ************************************************************ CURE_H */
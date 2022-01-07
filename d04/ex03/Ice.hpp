#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	public:

		Ice();
		Ice(Ice const &src);
		virtual ~Ice();

		Ice &			operator = (Ice const &rhs);
		Ice *			clone() const;
};

std::ostream &			operator << ( std::ostream &o, Ice const &i);

#endif /* ************************************************************* ICE_H */
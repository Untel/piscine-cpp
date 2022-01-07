#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
	: AMateria("cure")
{
	#ifdef DEBUG
		std::cout << "<Cure> Constructor" << std::endl;
	#endif // DEBUG
}

Cure::Cure(const Cure &src)
	: AMateria(src)
{
	#ifdef DEBUG
		std::cout << "<Cure> Copy Constructor" << std::endl;
	#endif // DEBUG
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	#ifdef DEBUG
		std::cout << "<Cure> Destructor Constructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &
	Cure::operator = (Cure const &rhs)
{
	#ifdef DEBUG
		std::cout << "<Cure> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

std::ostream &
	operator << (std::ostream &o, Cure const &i)
{
	o << "<Cure> " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
Cure *
	Cure::clone() const
{
	#ifdef DEBUG
		std::cout << "<Cure> Clone Method" << std::endl;
	#endif // DEBUG
	Cure *c = new Cure();
	return c;
};

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
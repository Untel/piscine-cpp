#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
	: AMateria("ice")
{
	#ifdef DEBUG
		std::cout << "<Ice> Constructor" << std::endl;
	#endif // DEBUG
}

Ice::Ice(const Ice &src)
	: AMateria(src)
{
	#ifdef DEBUG
		std::cout << "<Ice> Copy Constructor" << std::endl;
	#endif // DEBUG
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	#ifdef DEBUG
		std::cout << "<Ice> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &
	Ice::operator=( Ice const & rhs )
{
	#ifdef DEBUG
		std::cout << "<Ice> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	AMateria::operator=(rhs);
	return (*this);
}

std::ostream &
	operator<<( std::ostream & o, Ice const & i )
{
	o << "<Ice> " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
Ice *
	Ice::clone() const
{
	#ifdef DEBUG
		std::cout << "<Ice> Clone Method" << std::endl;
	#endif // DEBUG
	return new Ice(*this);
};

void
	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
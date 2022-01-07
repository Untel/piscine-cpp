#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string type) :
	_type(type)
{
	#ifdef DEBUG
		std::cout << "<AMateria> Constructor" << std::endl;
	#endif // DEBUG
}

AMateria::AMateria(const AMateria &src)
{
	#ifdef DEBUG
		std::cout << "<AMateria> Copy Constructor" << std::endl;
	#endif // DEBUG
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	#ifdef DEBUG
		std::cout << "<AMateria> Destructor Constructor" << std::endl;
	#endif // DEBUG
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &
	AMateria::operator = (AMateria const &rhs)
{
	#ifdef DEBUG
		std::cout << "<AMateria> Assignation Operator" << std::endl;
	#endif // DEBUG
	if ( this != &rhs ) {
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &
	operator << (std::ostream &o, AMateria const &i)
{
	o << "<Materia> " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
std::string const &
	AMateria::getType() const
{
	return this->_type;
}

void
	AMateria::use(ICharacter& target)
{
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
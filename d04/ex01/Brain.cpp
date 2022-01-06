#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "<Brain> constructor" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "<Brain> copy constructor" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "<Brain> destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "<Brain> assignation operator" << std::endl;

	if ( this != &rhs )
	{
		for (int i = 0; !rhs.ideas[i].empty(); i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & b )
{
	for (int i = 0; !b.ideas[i].empty(); i++) {
		o << b.ideas[i] << ", ";
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
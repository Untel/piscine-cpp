#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "<Dog> constructor" << std::endl;
}

Dog::Dog( const Dog & src )
	: Animal(src.getType())
{
	std::cout << "<Dog> copy constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "<Dog> destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "<Dog> assignation operator" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "<Dog> type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void
	Dog::makeSound() const {
	std::cout << "<Dog> ouaf ouaf" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
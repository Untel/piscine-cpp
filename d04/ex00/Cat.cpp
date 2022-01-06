#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "<Cat> constructor" << std::endl;
}

Cat::Cat( const Cat & src )
	: Animal(src.getType())
{
	std::cout << "<Cat> copy constructor" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "<Cat> destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "<Cat> assignation operator" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "<Cat> type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void
	Cat::makeSound() const {
	std::cout << "<Cat> meeeeow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
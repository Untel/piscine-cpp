#include "Cat.hpp"
#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() :
	Animal("Cat"),
	brain(new Brain())
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
	delete this->brain;
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
		this->brain = new Brain(*rhs.brain);
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

Brain
	*Cat::getBrain() const {
	return this->brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
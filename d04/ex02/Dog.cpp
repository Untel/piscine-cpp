#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() :
	Animal("Dog"),
	brain(new Brain())
{
	std::cout << "<Dog> constructor" << std::endl;
}

Dog::Dog( const Dog & src ) :
	Animal(src.getType())
{
	std::cout << "<Dog> copy constructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->brain;
	std::cout << "<Dog> destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator = (Dog const & rhs)
{
	std::cout << "<Dog> assignation operator" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = new Brain(*rhs.brain);
	}
	return *this;
}

std::ostream &operator << (std::ostream &o, const Dog &i)
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

Brain
	*Dog::getBrain() const {
	return this->brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
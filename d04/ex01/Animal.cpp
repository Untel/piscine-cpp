#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
	: type("Animal")
{
	std::cout << "<Animal> constructor" << std::endl;
}

Animal::Animal( std::string t )
	: type(t)
{
	std::cout << "<Animal> params constructor" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "<Animal> copy constructor" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "<Animal> destructor" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "<Animal> assignation operator" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "<Animal> type is " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void
	Animal::makeSound() const {
	std::cout << "<Animal> making sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string
	Animal::getType() const {
	return this->type;
}


/* ************************************************************************** */
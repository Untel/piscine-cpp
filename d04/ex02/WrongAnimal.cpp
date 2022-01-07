#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
	: type("WrongAnimal")
{
	std::cout << "<WrongAnimal> constructor" << std::endl;

}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "<WrongAnimal> copy constructor" << std::endl;
    *this = src;

}

WrongAnimal::WrongAnimal( std::string t )
	:type(t)
{
	std::cout << "<WrongAnimal> params constructor" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "<WrongAnimal> destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "<WrongAnimal> assignation operator" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "<WrongAnimal> type is " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void
	WrongAnimal::makeSound() const {
	std::cout << "<WrongAnimal> making sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string
	WrongAnimal::getType() const {
	return this->type;
}

/* ************************************************************************** */
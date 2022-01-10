#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	#ifdef DEBUG
		std::cout << "<Intern> Constructor" << std::endl;
	#endif // DEBUG
}

Intern::Intern( const Intern & src )
{
	#ifdef DEBUG
		std::cout << "<Intern> CopyConstructor" << std::endl;
	#endif // DEBUG
	(*this) = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &
	Intern::operator=( Intern const & rhs )
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream &
	operator<<( std::ostream & o, Intern const & i )
{
	o << "<Intern>" << i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
Form *
	Intern::makeForm (std::string const key, std::string const target)
{
	static t_keyform factories[FACTORY_COUNT] = {
		{ .key = "shrubbery creation", .factory = ShrubberyCreationForm::create },
		{ .key = "robotmy request", .factory = RobotomyRequestForm::create },
		{ .key = "presidential pardon", .factory = PresidentialPardonForm::create }
	};

	for (int i = 0; i < 3; i++) {
		if (factories[i].key == key) {
			return factories[i].factory(target);
			std::cout << key << "found\n";
		}
	}
	return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 145, 137),
	_target(target)
{
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Constructor" << std::endl;
	#endif // DEBUG
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) :
	Form(src),
	_target(src._target)
{
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Copy Constructor" << std::endl;
	#endif // DEBUG
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	this->_target = rhs._target;	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void
	PresidentialPardonForm::execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::IsUnsignedException)
{
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Execute form" << std::endl;
	#endif // DEBUG
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
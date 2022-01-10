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
	Form(src)
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
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void
	PresidentialPardonForm::execute(Bureaucrat *signer) throw(Form::GradeTooLowException, Form::IsUnsignedException)
{
	Form::execute(signer);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
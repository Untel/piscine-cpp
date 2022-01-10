#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 145, 137),
	_target(target)
{
	#ifdef DEBUG
		std::cout << "<RobotomyRequestForm> Constructor" << std::endl;
	#endif // DEBUG
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
	Form(src)
{
	#ifdef DEBUG
		std::cout << "<RobotomyRequestForm> Copy Constructor" << std::endl;
	#endif // DEBUG
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	#ifdef DEBUG
		std::cout << "<RobotomyRequestForm> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	#ifdef DEBUG
		std::cout << "<RobotomyRequestForm> Assignation Operator" << std::endl;
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
	RobotomyRequestForm::execute(Bureaucrat *signer) throw(Form::GradeTooLowException, Form::IsUnsignedException)
{
	Form::execute(signer);
	if (((rand() % 2 > + 1) >= 1)) {
		std::cout << this->_target << " has been robotomized !" << std::endl;
	} else {
		std::cout << "It's a failure!" << std::endl;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
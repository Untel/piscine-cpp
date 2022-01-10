#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 145, 137),
	_target(target)
{
	srand(time(NULL));
	#ifdef DEBUG
		std::cout << "<RobotomyRequestForm> Constructor" << std::endl;
	#endif // DEBUG
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
	Form(src),
	_target(src._target)
{
	srand(time(NULL));
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
	this->_target = rhs._target;
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void
	RobotomyRequestForm::execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::IsUnsignedException)
{
	int randed = rand() % 2;
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Execute form randed " << randed << std::endl;
	#endif // DEBUG
	Form::execute(executor);

	if (randed) {
		std::cout << this->_target << " has been robotomized !" << std::endl;
	} else {
		std::cout << "It's a failure!" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
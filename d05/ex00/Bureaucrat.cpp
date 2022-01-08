#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name)
{
	this->_setGrade(grade);
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Constructor" << std::endl;
	#endif // DEBUG
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) :
	_name(src._name)
{
	this->_setGrade(src._grade);
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Copy Constructor" << std::endl;
	#endif // DEBUG
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &
	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	this->_setGrade(rhs._grade);
	// this->_name = rhs._name // Subject is asking for a constant name, so no reassign here.
	return (*this);
}

std::ostream &
	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void
	Bureaucrat::incrementGrade(void)
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Increment" << std::endl;
	#endif // DEBUG
	this->_setGrade(this->_grade - 1);
}

void
	Bureaucrat::decrementGrade(void)
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Decrement" << std::endl;
	#endif // DEBUG
	this->_setGrade(this->_grade + 1);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string
	Bureaucrat::getName(void) const
{
	return this->_name;
}

int
	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void
	Bureaucrat::_setGrade(int value)
{
	#ifdef DEBUG
		std::cout << "<Bureaucrat> Grade set to " << value << std::endl;
	#endif // DEBUG
	if (value > Bureaucrat::_min_grade)
		throw Bureaucrat::GradeTooLowException();
	else if (value < Bureaucrat::_max_grade)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = value;
}

/*
** -------------------------------- EXCEPTIONS --------------------------------
*/

const char *
	Bureaucrat::GradeTooHightException::what() const throw()
{
	return ("Grade is too hight");
}

const char *
	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

/* ************************************************************************** */
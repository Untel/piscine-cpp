/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:09:14 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/08 19:46:03 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int grade) :
	_name(name)
{
	this->_setGrade(grade);
	#ifdef DEBUG
		std::cout << "<Form> Constructor" << std::endl;
	#endif // DEBUG
}

Form::Form( const Form & src ) :
	_name(src._name)
{
	this->_setGrade(src._grade);
	#ifdef DEBUG
		std::cout << "<Form> Copy Constructor" << std::endl;
	#endif // DEBUG
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	#ifdef DEBUG
		std::cout << "<Form> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &
	Form::operator=( Form const & rhs )
{
	#ifdef DEBUG
		std::cout << "<Form> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	// this->_name = rhs._name // Subject is asking for a constant name, so no reassign here.
	return (*this);
}

std::ostream &
	operator<<( std::ostream & o, Form const & i )
{
	o << "Form "
		<< i.getName()
		<< " is "
		<< i.isSigned() ? "signed" : "unsigned"
	;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void
	Form::beSigned(Bureaucrat *signer)
{
	if (this->isSigned()) {
		throw Form::StillSignedException();
	}
	if (signer->getGrade() > this->_sign_grade) {
		throw Form::GradeTooLowException();
	}
}

void
	Form::signForm(Bureaucrat *signer)
{
	this->beSigned(signer);
	std::cout << "" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string
	Form::getName(void) const
{
	return this->_name;
}

int
	Form::getSignGrade(void) const
{
	return this->_sign_grade;
}

int
	Form::getExecuteGrade(void) const
{
	return this->_sign_grade;
}

/*
** -------------------------------- EXCEPTIONS --------------------------------
*/

const char *
	Form::GradeTooHightException::what() const throw()
{
	return ("Grade is too hight");
}

const char *
	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *
	Form::StillSignedException::what() const throw()
{
	return ("Still signed");
}


/* ************************************************************************** */
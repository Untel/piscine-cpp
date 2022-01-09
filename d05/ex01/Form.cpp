/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:09:14 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/09 19:10:13 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int sign_grade, int execute_grade) :
	_name(name),
	_sign_grade(Form::inRangeValue(sign_grade)),
	_execute_grade(Form::inRangeValue(execute_grade)),
	_is_signed(false)
{
	#ifdef DEBUG
		std::cout << "<Form> Constructor" << std::endl;
	#endif // DEBUG
}

Form::Form(const Form &src) :
	_name(src._name),
	_sign_grade(Form::inRangeValue(src._sign_grade)),
	_execute_grade(Form::inRangeValue(src._execute_grade)),
	_is_signed(src._is_signed)
{
	#ifdef DEBUG
		std::cout << "<Form> Copy Constructor" << std::endl;
	#endif // DEBUG
	(*this) = src;
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
	Form::operator = ( Form const & rhs )
{
	#ifdef DEBUG
		std::cout << "<Form> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	*(std::string *)&this->_name = rhs._name;
	*(int *)&this->_sign_grade = Form::inRangeValue(rhs._sign_grade);
	*(int *)&this->_execute_grade = Form::inRangeValue(rhs._execute_grade);
	this->_is_signed = rhs._is_signed;
	return (*this);
}

std::ostream &
	operator<<( std::ostream & o, Form const & i )
{
	o << "<Form '"
		<< i.getName()
		<< "' Sign("
		<< i.getSignGrade()
		<< ") Exec("
		<< i.getExecuteGrade()
		<< ") Status("
		<< (i.isSigned() ? "signed" : "unsigned")
		<< ")>"
	;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void
	Form::beSigned(Bureaucrat *signer) throw(Form::GradeTooHightException, Form::GradeTooLowException, Form::StillSignedException)
{
	if (this->isSigned()) {
		throw Form::StillSignedException();
	}
	if (*signer < this->_sign_grade) {
		throw Form::GradeTooLowException();
	}
	this->_is_signed = true;
}

void
	Form::signForm(Bureaucrat *signer) 
{
	try {
		this->beSigned(signer);
		std::cout << *signer << " signs " << *this << std::endl;
	} catch (Form::StillSignedException &ex) {
		std::cout << " ERR MESSAGE: " << ex.what() << std::endl;
		std::cout << *signer << " cannot sign " << *this << " because the form is still signed" << std::endl;
	} catch (Form::GradeTooLowException &ex) {
		std::cout << *signer << " cannot sign " << *this << " because his grade is too low" << std::endl;
	} catch (Form::GradeTooHightException &ex) {
		std::cout << *signer << " cannot sign " << *this << " because his grade is too hight" << std::endl;
	} catch (std::exception &ex) {
		std::cout << *signer << " cannot sign " << *this << " because " << ex.what() << std::endl;
	}
}

int
	Form::inRangeValue(int value) throw(Form::GradeTooHightException, Form::GradeTooLowException)
{
	if (value > Bureaucrat::min_grade)
		throw Form::GradeTooLowException();
	else if (value < Bureaucrat::max_grade)
		throw Form::GradeTooLowException();
	return value;
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
	return this->_execute_grade;
}

bool
	Form::isSigned(void) const
{
	return this->_is_signed;
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
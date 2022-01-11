/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:15:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/11 17:16:48 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void testCanonicalBureaucrats() {
    Bureaucrat *b = new Bureaucrat("Jean", 42);
    std::cout << *b << std::endl;
    Bureaucrat *c = new Bureaucrat(*b);
    std::cout << *c << std::endl;
    Bureaucrat *d = new Bureaucrat("Pierre", 12);
    std::cout << *d << std::endl;
    *d = *c;
    std::cout << *d << std::endl;
    delete b;
    delete c;
    delete d;
}

void testExceptions() {
    try {
        Bureaucrat *b = new Bureaucrat("Jean", 151);
        (void) b;
    } catch (Bureaucrat::GradeTooHighException &ex) {
        std::cout << "GradeTooHighException value: " << ex.what() << std::endl;
    } catch (Bureaucrat::GradeTooLowException &ex) {
        std::cout << "GradeTooLowException value: " << ex.what() << std::endl;
    } catch (std::exception &ex) {
        std::cout << "Other exception value: " << ex.what() << std::endl;
    }
}

void testGenericExceptions() {
    try {
        Bureaucrat *b = new Bureaucrat("Jean", 150);
        b->decrementGrade();
    } catch (std::exception &ex) {
        std::cout << "Generic exception value: " << ex.what() << std::endl;
    }
}

void testCanonicalForms() {
    Form *b = new Form("B132", 132, 41);
    std::cout << *b << std::endl;
    Form *c = new Form(*b);
    std::cout << *c << std::endl;
    Form *d = new Form("B12", 12, 14);
    *d = *c;
    std::cout << *d << std::endl;
    delete b;
    delete c;
    delete d;
}

void testExceptionsForms() {
    try {
        new Form("C151", 151, 170);
    } catch (Form::GradeTooHighException &ex) {
        std::cout << "Form::GradeTooHighException value: " << ex.what() << std::endl;
    } catch (Form::GradeTooLowException &ex) {
        std::cout << "Form::GradeTooLowException value: " << ex.what() << std::endl;
    } catch (std::exception &ex) {
        std::cout << "Other exception value: " << ex.what() << std::endl;
    }
}

void testFormsSigning() {
    Form *f = new Form("B150", 41, 1);
    Bureaucrat *b = new Bureaucrat("Jean", 42);
    b->signForm(f);
    delete f;
    delete b;
}

void testBureaucratDirection() {
    Bureaucrat *b = new Bureaucrat("Jean", 42);
    if (*b > 41) {
        std::cout << *b << " is > 42" << std::endl;
    } else {
        std::cout << *b << " is <= 42" << std::endl;
    }
    delete b;
}


int main(void)
{
    // testBureaucratDirection();
    // testCanonicalBureaucrats();
    // testExceptions();
    // testGenericExceptions();
    // testCanonicalForms();
    testFormsSigning();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:15:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/08 18:47:55 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testCanonicalBureaucrats() {
    Bureaucrat *b = new Bureaucrat("Jean", 42);
    std::cout << *b << std::endl;
    Bureaucrat *c = new Bureaucrat(*b);
    std::cout << *c << std::endl;
    Bureaucrat *d = new Bureaucrat("Pierre", 12);
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
    } catch (Bureaucrat::GradeTooHightException &ex) {
        std::cout << "GradeTooHightException value: " << ex.what() << std::endl;
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


int main(void)
{
    // testCanonicalBureaucrats();
    // testExceptions();
    testGenericExceptions();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:15:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/10 19:46:06 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

void executeShrubbery(int makeFail) {
    Form *f = new ShrubberyCreationForm("home");
    Bureaucrat *b1 = new Bureaucrat("Bob", f->getExecuteGrade() + makeFail);

    try {
        b1->signForm(f);
        b1->executeForm(*f);
    } catch (std::exception &ex) {
        std::cout << "Fail with " << ex.what() << std::endl;
    }
    delete f;
    delete b1;
}

void executePresidentialPardon(int makeFail) {
    Form *f = new PresidentialPardonForm("home");
    Bureaucrat *b1 = new Bureaucrat("Bob", f->getExecuteGrade() + makeFail);
    // Bureaucrat *b2 = new Bureaucrat("Nulos", 150);

    try {
        b1->signForm(f);
        b1->executeForm(*f);
    } catch (std::exception &ex) {
        std::cout << "Fail with " << ex.what() << std::endl;
    }
    delete f;
    delete b1;
}

void executeRobotomyRequestForm(int makeFail) {
    Form *f = new RobotomyRequestForm("home");
    Bureaucrat *b1 = new Bureaucrat("Bob", f->getExecuteGrade() + makeFail);

    try {
        b1->signForm(f);
        b1->executeForm(*f);
    } catch (std::exception &ex) {
        std::cout << "Fail with " << ex.what() << std::endl;
    }
    delete f;
    delete b1;
}

int main(int ac, char **av)
{
    int makeFail = ac - 1;
    (void)av;
    executeShrubbery(makeFail);
    executePresidentialPardon(makeFail);
    executeRobotomyRequestForm(makeFail);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:15:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/11 21:59:41 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(int ac, char **av)
{
    int makeFail = ac - 1;
    (void)av;
    (void)makeFail;

    Intern *i = new Intern();
    Form *f;

    f = i->makeForm("shrubbery creation", "George");
    std::cout << "Generated form " << *f << std::endl;
    delete f;
    f = i->makeForm("robotomy request", "George");
    std::cout << "Generated form " << *f << std::endl;
    delete f;
    f = i->makeForm("presidential pardon", "George");
    std::cout << "Generated form " << *f << std::endl;
    delete f;
    delete i;
    return (0);
}
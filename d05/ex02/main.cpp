/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:15:18 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/09 23:12:17 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

void executeShrubbery() {
    Bureaucrat *b1 = new Bureaucrat("Bob", 72);
    // Bureaucrat *b2 = new Bureaucrat("Nulos", 150);
    Form *f = new ShrubberyCreationForm("home");

    f->signForm(b1);
    f->execute(b1);
}

int main(void)
{
    executeShrubbery();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:22:13 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 06:51:33 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

// Karen::Karen()
// {
    // void (Karen::*f)(void);
// }

// Karen::~Karen()
// {}

void
    Karen::debug(void)
{
    std::cout << BOLDGREEN;
    std::cout << "[DEBUG]" << std::endl;
    std::cout << RESET << GREEN;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;;
    std::cout << "I just love it!" << std::endl;
    std::cout << RESET;
}

void
    Karen::info(void)
{
    std::cout << BOLDCYAN;
    std::cout << "[INFO]" << std::endl;
    std::cout << RESET << CYAN;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!"  << std::endl;
    std::cout << RESET;
}

void
    Karen::warning(void)
{
    std::cout << BOLDYELLOW;
    std::cout << "[WARNING]" << std::endl;
    std::cout << RESET << YELLOW;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
    std::cout << RESET;
}

void
    Karen::error(void)
{
    std::cout << BOLDRED;
    std::cout << "[ERROR]" << std::endl;
    std::cout << RESET << RED;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << RESET;
}

void
    Karen::complain(std::string level)
{
    std::cout << "Complain " << level << std::endl;
    this->debug();
    this->info();
    this->warning();
    this->error();
}
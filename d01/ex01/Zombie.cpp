/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 04:57:29 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 05:54:52 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) :
    _name(name)
{}

Zombie::Zombie() :
    _name("Missing name")
{}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " destroyed" << std::endl;
}

std::string
    Zombie::getName(void)
{
    return this->_name;
}

void
    Zombie::setName(std::string name)
{
    this->_name = name;
}

void
    Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
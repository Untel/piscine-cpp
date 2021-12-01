/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:22:13 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 06:51:33 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
    _name(name),
    _weapon(NULL)
{}

HumanB::~HumanB()
{}

void
    HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void
    HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

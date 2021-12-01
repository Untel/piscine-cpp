/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:33:03 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 06:47:20 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
    _type(type)
{}

Weapon::~Weapon()
{}

const std::string
    &Weapon::getType()
{
	return this->_type;
}

void
    Weapon::setType(std::string	type)
{
	this->_type = type;
}
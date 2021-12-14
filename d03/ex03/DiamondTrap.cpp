/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 07:10:21 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
    ClapTrap(name + "_clap_name"),
    ScavTrap(name),
    FragTrap(name),
    _name(name)
{
    this->_hp = FragTrap::frag_hp;
    this->_ep = ScavTrap::scav_ep;
    this->_ad = FragTrap::frag_ad;
    std::cout << "DiamondTrap Constructor of " << this->_name << " called." << std::endl;
}


DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor of " << this->_name << " called." << std::endl;
}


void
    DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
}

void
    DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name " << this->_name << " but ClapTrap name " << ClapTrap::_name << " !" << std::endl;  
}
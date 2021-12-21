/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/21 20:54:27 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
    ClapTrap(name)
{
    this->_hitpoints = ScavTrap::scav_hp;
    this->_energy = ScavTrap::scav_ep;
    this->_attack_damage = ScavTrap::scav_ad;
    std::cout << "ScavTrap Constructor of " << this->_name << " called." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor of " << this->_name << " called." << std::endl;
}

void
    ScavTrap::attack (std::string const &target) {
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}


void
    ScavTrap::guardGate (void) {
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate Keeper mode." << std::endl;
}

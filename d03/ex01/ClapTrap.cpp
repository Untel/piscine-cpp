/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 06:34:52 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
    _name(name),
    _hp(10),
    _ep(10),
    _ad(0) {
    std::cout << "Constructor of " << this->_name << " called." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor of " << this->_name << " called." << std::endl;
}


std::string
    ClapTrap::getName() const {
    return this->_name;
}
void           
    ClapTrap::setName(std::string name) {
    this->_name = name;
}
unsigned int
    ClapTrap::getHitPoints() const {
    return this->_hp;
}
void
    ClapTrap::setHitPoints(unsigned int hp) {
    this->_hp = hp;
}
unsigned int
    ClapTrap::getEnergyPoints() const {
    return this->_ep;
}
void
    ClapTrap::setEnergyPoints(unsigned int ep) {
    this->_ep = ep;
}
unsigned int
    ClapTrap::getAttackDamage() const {
    return this->_ad;
}
void
    ClapTrap::setAttackDamage(unsigned int ad) {
    this->_ad = ad;
}

void
    ClapTrap::attack(std::string const &target) {
    std::cout << "Claptrap " << this->_name << " attack " << target << ", causing " << _ad << " points of damage!" << std::endl;
}
void
    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hp - amount > 0) {
        this->_hp -= amount;
        std::cout << "Claptrap " << this->_name << " took " << amount << " damages (" << this->_hp << " hps left)" << std::endl;
    } else {
        this->_hp = 0;
        std::cout << "Claptrap " << this->_name << " died after taking " << amount << " points of damage !" << std::endl;
    }
}
void
    ClapTrap::beRepaired(unsigned int amount) {
    this->_hp += amount;
    std::cout << "Claptrap " << this->_name << " repaired " << amount << " hps. (Now " << this->_hp << " hit points)" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/21 20:56:28 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
    _name(name),
    _hitpoints(10),
    _energy(10),
    _attack_damage(0) {
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
    return this->_hitpoints;
}
void
    ClapTrap::setHitPoints(unsigned int hp) {
    this->_hitpoints = hp;
}
unsigned int
    ClapTrap::getEnergyPoints() const {
    return this->_energy;
}
void
    ClapTrap::setEnergyPoints(unsigned int ep) {
    this->_energy = ep;
}
unsigned int
    ClapTrap::getAttackDamage() const {
    return this->_attack_damage;
}
void
    ClapTrap::setAttackDamage(unsigned int ad) {
    this->_attack_damage = ad;
}

void
    ClapTrap::attack(std::string const &target) {
    std::cout << "Claptrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}
void
    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitpoints - amount > 0) {
        this->_hitpoints -= amount;
        std::cout << "Claptrap " << this->_name << " took " << amount << " damages (" << this->_hitpoints << " hps left)" << std::endl;
    } else {
        this->_hitpoints = 0;
        std::cout << "Claptrap " << this->_name << " died after taking " << amount << " points of damage !" << std::endl;
    }
}
void
    ClapTrap::beRepaired(unsigned int amount) {
    this->_hitpoints += amount;
    std::cout << "Claptrap " << this->_name << " repaired " << amount << " hps. (Now " << this->_hitpoints << " hit points)" << std::endl;
}
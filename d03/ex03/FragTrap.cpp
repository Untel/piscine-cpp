/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 15:15:04 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
    ClapTrap(name)
{
    this->_hp = FragTrap::frag_hp;
    this->_ep = FragTrap::frag_ep;
    this->_ad = FragTrap::frag_ad;
    std::cout << "FragTrap Constructor of " << this->_name << " called." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor of " << this->_name << " called." << std::endl;
}

void
    FragTrap::highFivesGuys (void) {
    std::cout << "FragTrap " << this->_name << " is asking for an High Five !" << std::endl;
}

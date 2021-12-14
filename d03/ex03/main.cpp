/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:45 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 15:03:56 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int
    main(void)
{
    DiamondTrap a("Bee");
    a.whoAmI();
    // FragTrap b("Bluestreak");

    // a.attack(b.getName());
    // b.takeDamage(a.getAttackDamage());
    // b.beRepaired(b.getEnergyPoints());
    // a.guardGate();
    // b.highFivesGuys();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:45 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 07:17:04 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int
    main(void)
{
    ScavTrap a("Optimus Prime");
    FragTrap b("Bluestreak");

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(b.getEnergyPoints());
    a.guardGate();
    b.highFivesGuys();
    return (0);
}
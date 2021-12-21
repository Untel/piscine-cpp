/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:45 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/21 21:02:51 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int
    main(void)
{
    ClapTrap a("Optimus Prime");
    ScavTrap b("Bluestreak");

    b.takeDamage(a.getAttackDamage());
    b.beRepaired(b.getEnergyPoints());
    a.attack(b.getName());
    b.attack(a.getName());
    b.guardGate();
    return (0);
}
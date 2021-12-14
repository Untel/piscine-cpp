/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:45 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 07:07:48 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int
    main(void)
{
    ScavTrap a("Optimus Prime");
    ScavTrap b("Bluestreak");

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(b.getEnergyPoints());
    b.guardGate();
    return (0);
}
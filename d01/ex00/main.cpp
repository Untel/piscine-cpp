/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:01:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 05:22:04 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int
    main(void)
{
    Zombie z1 = Zombie("First Zombie");
    z1.announce();

    Zombie *z2 = newZombie("Second zombie");
    z2->announce();
    delete z2;

    randomChump("Third zombie");
    return (0);
}

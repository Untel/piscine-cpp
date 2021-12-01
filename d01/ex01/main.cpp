/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:01:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 05:57:00 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int
    main(void)
{
    int     zCount = 5;
    Zombie  *horde = zombieHorde(zCount, "Jean Edouard");

    for (int i = 0; i < zCount; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}

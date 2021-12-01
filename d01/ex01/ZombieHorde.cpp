/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:13:54 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 05:56:07 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		std::stringstream	ss;
		ss << (i);
        horde[i].setName(name + " " + ss.str());
	}
	return horde;
}
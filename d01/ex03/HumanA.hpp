/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:33:17 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 06:34:57 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
    private:
        std::string	_name;
        Weapon		&_weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void	attack();
        void	setWeapon(Weapon &weapon);
};

#endif
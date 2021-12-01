/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:33:31 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 06:42:53 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

    private:
        std::string	_type;

    public:
        Weapon(std::string type);
        ~Weapon();

        const std::string   &getType();
        void                setType(std::string type);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:40 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:36:50 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap;

class ClapTrap {
    protected:
        std::string             _name;
        int                     _hit_points;
        int                     _energy_points;
    public:
        ClapTrap               ();
        ClapTrap               (const ClapTrap &f);
        ~ClapTrap              ();
};


#endif
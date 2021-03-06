/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:40 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:36:50 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include <string>

class ScavTrap : virtual public ClapTrap {
    protected:
        static unsigned int const   scav_hp = 100;
        static unsigned int const   scav_ep = 50;
        static unsigned int const   scav_ad = 20;
    public:
        ScavTrap                (std::string name);
        ~ScavTrap               ();
        void guardGate          (void);
        void attack             (std::string const &target);
};

#endif
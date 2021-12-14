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

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    protected:
        static unsigned int const   frag_hp = 100;
        static unsigned int const   frag_ep = 100;
        static unsigned int const   frag_ad = 30;
    public:
        FragTrap                (std::string name);
        ~FragTrap               ();
        void highFivesGuys      (void);
};

#endif
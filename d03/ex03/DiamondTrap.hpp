/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:42 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/14 15:19:02 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {
    private:
        std::string                  _name;
    public:
        DiamondTrap                 (std::string name);
        ~DiamondTrap                ();
        void attack                 (std::string const &target);
        void whoAmI                 (void);
};

#endif
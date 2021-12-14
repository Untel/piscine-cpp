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

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    private:
        std::string             _name;
        unsigned int            _hp; // hit points
        unsigned int            _ep; // energy points
        unsigned int            _ad; // attack damage
    public:
        ClapTrap                (std::string name);
        ~ClapTrap               ();
        void attack             (std::string const &target);
        void takeDamage         (unsigned int amount);
        void beRepaired         (unsigned int amount);

        std::string             getName() const;
        void                    setName(std::string name);
        unsigned int            getHitPoints() const;
        void                    setHitPoints(unsigned int hp);
        unsigned int            getEnergyPoints() const;
        void                    setEnergyPoints(unsigned int ep);
        unsigned int            getAttackDamage() const;
        void                    setAttackDamage(unsigned int ad);
};


#endif
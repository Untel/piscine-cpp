/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 04:57:33 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/01 05:53:46 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define CONTACT_CLASS_H
# include <iostream>

class Zombie {
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);

        void            announce(void);
        std::string     getName();
        void            setName(std::string name);
    private:
        std::string     _name;
};

#endif
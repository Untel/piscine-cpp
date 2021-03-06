/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:40 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:36:50 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed;

class Fixed {
    private:
        int                 _value;
        const static int    _bits = 8;

    public:
        Fixed               ();
        Fixed               (const Fixed &f);
        ~Fixed              ();

        Fixed &operator =   (const Fixed& f);

        int getRawBits      (void) const;
        void setRawBits     (int const raw);
};

#endif
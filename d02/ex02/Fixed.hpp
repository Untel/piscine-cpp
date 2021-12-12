/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:40 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:21:42 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed;

class Fixed {
    private:
        int                 _value;
        const static int    _bits = 8;

    public:
        Fixed               ();
        Fixed               (const int val);
        Fixed               (const float val);
        Fixed               (const Fixed &f);
        ~Fixed              ();

        Fixed &operator =   (const Fixed &f);
        Fixed &operator ++  (void);
        Fixed &operator --  (void);
        Fixed operator ++   (int);
        Fixed operator --   (int);
        Fixed operator +    (const Fixed &f) const;
        Fixed operator -    (const Fixed &f) const;
        Fixed operator *    (const Fixed &f) const;
        Fixed operator /    (const Fixed &f) const;
        bool operator ==    (const Fixed &f) const;
        bool operator !=    (const Fixed &f) const;
        bool operator <=    (const Fixed &f) const;
        bool operator >=    (const Fixed &f) const;
        bool operator >     (const Fixed &f) const;
        bool operator <     (const Fixed &f) const;

        int                 getRawBits(void) const;
        void                setRawBits(int const raw);
        float               toFloat(void) const;
        int                 toInt(void) const;
        static Fixed        &min(Fixed &a, Fixed &b);
        static Fixed const  &min(const Fixed &a, const Fixed &b);
        static Fixed        &max(Fixed &a, Fixed &b);
        static Fixed const  &max(const Fixed &a, const Fixed &b);


};

std::ostream                &operator<< (std::ostream &out, const Fixed &f);

#endif
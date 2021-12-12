/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:55:35 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}


Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = (val << this->_bits);
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf((val * (1 << this->_bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed
    &Fixed::operator = (const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = (f.getRawBits());
    return *this;
}

std::ostream
    &operator << (std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

int
    Fixed::getRawBits(void) const
{
    return this->_value;
}

void
    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int
    Fixed::toInt(void) const
{
    int ret = this->_value >> this->_bits;
    return ret;
}

float
    Fixed::toFloat(void) const
{
    float ret = this->_value / (float)(1 << this->_bits);
    return ret;
}
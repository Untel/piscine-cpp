/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:35 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:55:58 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}


Fixed::Fixed(const int val)
{
    this->_value = (val << this->_bits);
}

Fixed::Fixed(const float val)
{
    this->_value = roundf((val * (1 << this->_bits)));
}

Fixed::~Fixed()
{
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

Fixed
    &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed const
    &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed
    &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const
    &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}


Fixed
    &Fixed::operator = (const Fixed &f)
{
    this->_value = (f.getRawBits());
    return *this;
}

std::ostream
    &operator << (std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}

bool
    Fixed::operator > (const Fixed &cmp) const
{
	return (this->_value > cmp.getRawBits());
}

bool
    Fixed::operator < (const Fixed &cmp) const
{
	return (this->_value < cmp.getRawBits());
}

bool
    Fixed::operator >= (const Fixed &cmp) const
{
	return (this->_value >= cmp.getRawBits());
}

bool
    Fixed::operator <= (const Fixed &cmp) const
{
	return (this->_value <= cmp.getRawBits());
}

bool
    Fixed::operator == (const Fixed &cmp) const
{
	return (this->_value == cmp.getRawBits());
}

bool
    Fixed::operator != (const Fixed &cmp) const
{
	return (this->_value != cmp.getRawBits());
}

Fixed
    Fixed::operator + (const Fixed &cmp) const
{
	Fixed	ret;

	ret.setRawBits(this->_value + cmp.getRawBits());
	return (ret);
}

Fixed
    Fixed::operator - (const Fixed &cmp) const
{
	Fixed	ret;

	ret.setRawBits(this->_value - cmp.getRawBits());
	return (ret);
}

Fixed
    Fixed::operator * (const Fixed &cmp) const
{
	Fixed	ret;

	ret.setRawBits((this->_value * cmp.getRawBits()) >> this->_bits);
	return (ret);
}

Fixed
    Fixed::operator / (const Fixed &cmp) const
{
	Fixed	ret;

	ret.setRawBits((this->_value << this->_bits) / cmp.getRawBits());
	return (ret);
}

Fixed
    &Fixed::operator ++ (void)
{
	this->_value++;
	return (*this);
}

Fixed
    Fixed::operator ++ (int)
{
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed
    &Fixed::operator -- (void)
{
	this->_value--;
	return (*this);
}

Fixed
    Fixed::operator -- (int)
{
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}
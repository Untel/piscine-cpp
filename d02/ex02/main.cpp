/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 00:17:45 by adda-sil          #+#    #+#             */
/*   Updated: 2021/12/12 23:54:21 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int
    main(void)
{
    Fixed a;
    Fixed b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    // std::cout << "a > b : " << (a > b) << std::endl;
    // std::cout << "a < b : " << (b < a) << std::endl;
    // std::cout << "a >= b : " << (a >= b) << std::endl;
    // std::cout << "a >= a : " << (a >= a) << std::endl;
    // std::cout << "a <= b : " << (a <= b) << std::endl;
    // std::cout << "a != b : " << (a != b) << std::endl;
    // std::cout << "a == b : " << (a == b) << std::endl;
    // std::cout << "a == a : " << (a == a) << std::endl;
    // std::cout << "a != a : " << (a != a) << std::endl;

    // std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;

    // std::cout << "10 / 3.333 : " << Fixed(10) / Fixed(3.333f) << std::endl;
    // std::cout << "10 * 3.333 : " << Fixed(10) * Fixed(3.333f) << std::endl;
    // std::cout << "10 + 3.333 : " << Fixed(10) + Fixed(3.333f) << std::endl;
    // std::cout << "10 - 3.333 : " << Fixed(10) - Fixed(3.333f) << std::endl;
    return (0);
}
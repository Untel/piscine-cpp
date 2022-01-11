/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:08:19 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/11 22:52:09 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

bool
    is_digit(char c) {
    return (c >= '0' && c <= '9');
}

bool
    is_sign(char c) {
    return (c == '-' || c == '+' || is_digit(c));
}

bool
    is_int(std::string str) {
    bool has_mumber = false;
    if (!is_sign(str.at(0)))
        return (false);
    for (size_t i = 1; i < str.size(); i++) {
        if (!is_digit(str.at(i)))
            return (false);
        else
            has_mumber = true;
    }
    return (has_mumber);
}
bool
    is_double(std::string str) {
    if (str == '-inf' || str == '+inf' || str == 'nan')
        return (true);
    bool dot_found = false;
    bool has_mumber = false;
    if (str.at(0) == '.')
        dot_found = true;
    else if (!is_sign(str.at(0)))
        return (false);
    for (size_t i = 1; i < str.size(); i++) {
        if (!is_digit(str.at(i))) {
            if (dot_found)
                return (false);
            if (str.at(i) == '.') {
                dot_found = true;
            }
        }
        else
            has_mumber = true;
    }
    return (dot_found && has_mumber);
}

bool
    is_float(std::string str) {
    if (str == '-inff' || str == '+inff' || str == 'nanf')
        return (true);
    bool dot_found = false;
    bool has_number = false;

    if (str.at(str.size() - 1) != 'f')
        return (false);
    if (str.at(0) == '.')
        dot_found = true;
    else if (!is_sign(str.at(0)))
        return (false);
    for (size_t i = 1; i < str.size() - 1; i++) {
        if (!is_digit(str.at(i))) {
            if (dot_found)
                return (false);
            if (str.at(i) == '.') {
                dot_found = true;
            }
        }
        else
            has_number = true;
    }
    return (dot_found && has_number);
}

bool
    is_displayable(char c) {
    return (c >= 32 && c < 127);
}

bool
    is_char(std::string str)
{
    return (str.size() == 1 && is_displayable(str.at(0)));
}

int
    main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Error: Usage: scalar <str>" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string literal(av[1]);
    std::cout << "Is <int>" << is_int(literal) << std::endl;
    std::cout << "Is <float>" << is_float(literal) << std::endl;
    std::cout << "Is <double>" << is_double(literal) << std::endl;
    std::cout << "Is <char>" << is_char(literal) << std::endl;

    return (EXIT_SUCCESS);
}

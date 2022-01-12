/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:23:34 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/11 23:25:15 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

bool    is_digit(char c);
bool    is_sign(char c);
bool    is_displayable(char c);
bool    is_char(std::string str);
bool    is_int(std::string str);
bool    is_double(std::string str);
bool    is_float(std::string str);

#endif // !UTILS_HPP
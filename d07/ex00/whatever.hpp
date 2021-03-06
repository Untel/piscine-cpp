/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:09:17 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 01:40:25 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>

template<typename T>
void swap(T & a, T & b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
const T & min(const T & a, const T & b) { 
	return (a < b ? a : b); 
}

template <typename T>
const T & max(const T & a, const T & b) { 
	return (a > b ? a : b);
}

#endif // !WHATEVER_HPP
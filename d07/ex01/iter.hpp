/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:09:17 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/16 01:56:40 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>

template<typename T>
void iter(T * lst, size_t len, void (* fn)(T const & el)) {
    for (size_t i = 0; i < len; i++)
        fn(lst[i]);
}

#endif // !ITER_HPP
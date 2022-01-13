/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:37:26 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/13 02:37:12 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include <stdint.h>
# include <iostream>
    struct Data {
        int value;
    };
    uintptr_t   serialize(Data* ptr);
    Data*       deserialize(uintptr_t raw);
#endif // !SERIALIZATION_HPP


















/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:37:26 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/12 21:00:39 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include <stdint.h>
# include <iostream>
    struct Data {
        int value;
    };

    uintptr_t   serialize(Data* ptr) {
        return <reinterpret_cast>(ptr);
    }

    Data*       deserialize(uintptr_t raw) {
        
    }

    int main() {
        Data el = { .value = 42 };
        std::cout << "Initial ref " << &el << std::endl;

        uintptr_t ptr = serialize(&el);
        std::cout << "Serialized ptr " << ptr << std::endl;

        Data reEl* = deserialize(ptr);
        std::cout << "DeSerialized ptr " << reEl << std::endl;

        std::cout << "Should print 42: ";
        std::cout << reEl->value << std::endl;
    }
#endif // !SERIALIZATION_HPP


















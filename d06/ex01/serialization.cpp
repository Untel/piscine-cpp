/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:46:37 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/12 22:49:49 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t   serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*       deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data el = { .value = 42 };
    std::cout << "Initial ref " << &el << std::endl;

    uintptr_t ptr = serialize(&el);
    std::cout << "Serialized ptr " << ptr << std::endl;

    Data *reEl = deserialize(ptr);
    std::cout << "DeSerialized ptr " << reEl << std::endl;

    std::cout << "Should print 42: ";
    std::cout << reEl->value << std::endl;
}
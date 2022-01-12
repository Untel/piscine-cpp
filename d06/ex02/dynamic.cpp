/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:46:37 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/12 23:31:58 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"

Base    * generate(void) {
    int randed = rand() % 3;
    if (randed == 0) {
        #ifdef DEBUG
            std::cout << "A\n";
        #endif // DEBUG
        return new A();
    }
    if (randed == 1) {
        #ifdef DEBUG
            std::cout << "B\n";
        #endif // DEBUG
        return new B();
    }
    #ifdef DEBUG
        std::cout << "C\n";
    #endif // DEBUG
    return new C();
}

void    identify(Base * p) {
    try {
        A a = dynamic_cast<A>(*p);
        std::cout << "Dynamic class is A\n";
    } catch (std::bad_cast &bc) {
        try {
            B *b = dynamic_cast<B>(*p);
            std::cout << "Dynamic class is B\n";
            catch (std::bad_cast &bc) {
                try {
                    C *c = dynamic_cast<C>(*c);
                    std::cout << "Dynamic class is C\n";
                } catch (std::bad_cast &bc) {
                    std::cout << "Dynamic class is D\n";
                }
            }
        }
    }
}

// void    identify(Base & p) {
//     try {
//         A a = dynamic_cast<A>(p);
//         std::cout << "Dynamic class is A\n";
//     } catch (std::bad_cast &bc) {
//         try {
//             B *b = dynamic_cast<B>(p);
//             std::cout << "Dynamic class is B\n";
//             try {
//                 C *c = dynamic_cast<C>(c);
//                 std::cout << "Dynamic class is C\n";
//             } catch () {
//                 std::cout << "Dynamic class is D\n";
//             }
//         }
//     }
// }

int main(void) {
    srand(time(NULL));
    Base *b = generate();
    identify(b);
    return (0);
}

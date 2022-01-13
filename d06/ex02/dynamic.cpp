/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:46:37 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/13 16:23:23 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"

Base    * generate(void) {
    int randed = rand() % 3;
    if (randed == 0) {
        #ifdef DEBUG
            std::cout << "Should be A\n";
        #endif // DEBUG
        return new A();
    }
    if (randed == 1) {
        #ifdef DEBUG
            std::cout << "Should be B\n";
        #endif // DEBUG
        return new B();
    }
    #ifdef DEBUG
        std::cout << "Should be C\n";
    #endif // DEBUG
    return new C();
}

void    identify(Base * p) {
    #ifdef DEBUG
        std::cout << "Identify by pointer " << p << std::endl;
    #endif // DEBUG
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Dynamic class is unknown" << std::endl;
}

void    identify(Base & p) {
    #ifdef DEBUG
        std::cout << "Identify by reference " << &p << std::endl;
    #endif // DEBUG
    try {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    } catch (std::exception &bca) {
        (void)bca;
        try {
            B b = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        } catch (std::exception &bcb) {
            (void)bcb;
            try {
                C c = dynamic_cast<C &>(c);
                std::cout << "C" << std::endl;
            } catch (std::exception &bcc) {
                (void)bcc;
                std::cout << "Dynamic class is unknown" << std::endl;
            }
        }
    }
}

int main(void) {
    srand(time(NULL));
    Base *b = generate();
    #ifdef DEBUG
        std::cout << "Generated base addr: " << b << std::endl;
    #endif // DEBUG
    identify(b);
    identify(*b);
    return (0);
}

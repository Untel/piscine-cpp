/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:46:37 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/13 02:35:11 by adda-sil         ###   ########.fr       */
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
        if (dynamic_cast<A *>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B *>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C *>(p))
            std::cout << "C" << std::endl;
        else
            std::cout << "Dynamic class is unknown" << std::endl;
    } catch (std::bad_cast &bc) {
        std::cout << "Fail to catch dynamically. Reason: " << bc.what() << std::endl;
    }
}

void    identify(Base & p) {
    try {
        if (dynamic_cast<A *>(&p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B *>(&p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C *>(&p))
            std::cout << "C" << std::endl;
        else
            std::cout << "Dynamic class is unknown" << std::endl;
    } catch (std::bad_cast &bc) {
        std::cout << "Fail to catch dynamically. Reason: " << bc.what() << std::endl;
    }
}

int main(void) {
    srand(time(NULL));
    Base *b = generate();
    std::cout << "Generated base addr: " << b << std::endl;
    identify(b);
    identify(*b);
    return (0);
}

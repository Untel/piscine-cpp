/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:49:04 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/07 15:48:39 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void testMaterias() {
    Cure *cure = new Cure();
    Cure *cloneCure = cure->clone();
    delete cloneCure;
    delete cure;
}

int main(void) {
    testMaterias();
    return 0;
}
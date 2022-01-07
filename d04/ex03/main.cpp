/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:49:04 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/07 17:36:56 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

void testCharacters() {
    Cure *cure = new Cure();
    Ice *ice = new Ice();
    Character *adr = new Character("Adrien");
    Character *jea = new Character("Jean");
    adr->equip(cure);
    adr->equip(ice);
    adr->equip(NULL);
    adr->use(0, *jea);
    adr->use(1, *jea);
    adr->use(3, *jea);
}

void testMaterias() {
    Cure *cure = new Cure();
    Cure *cloneCure = cure->clone();
    delete cloneCure;
    delete cure;
}

int main(void) {
    //testMaterias();
    testCharacters();
    return 0;
}
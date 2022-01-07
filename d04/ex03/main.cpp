/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:49:04 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/07 20:53:08 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"


void wtfMaterias() {
    Cure *cure = new Cure();
    Character *adr = new Character("Adrien");
    Character *jea = new Character("Jean");
    adr->equip(cure);
    jea->equip(cure);
    delete jea; // will delete *cure
    adr->use(0, *adr); // will segfault because address is still registered
    delete adr; // Will also segfault because cure is freed twice
}

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

void testDeepCopyCharacter() {
    Character *adr = new Character("Adrien");
    Ice *ice = new Ice();
    adr->equip(ice);

    Character *jea = new Character(*adr);
    adr->use(0, *jea);
    jea->use(0, *jea);
}

int main(void) {
    //testMaterias();
    // testCharacters();
    testDeepCopyCharacter();
    return 0;
}

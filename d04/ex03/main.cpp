/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:49:04 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/08 11:45:56 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

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

void testMateriaSources() {
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria* tmp = src->createMateria("ice");
    delete tmp;
    tmp = src->createMateria("yo");
    (void)tmp;
}

void subjectCase() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

int main(void) {
    //testMaterias();
    //testCharacters();
    //testDeepCopyCharacter();
    //testMateriaSources();
    subjectCase();
    return 0;
}

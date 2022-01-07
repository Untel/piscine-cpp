/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:57:30 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/07 10:43:42 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void
    deepCopyTest() {
    std::cout << "DEEP COPY TEST FOR DOG" << std::endl;
    const Dog* dog = new Dog();
    std::cout << *dog << " " << std::endl;
    dog->getBrain()->addIdea("Ouaf x1");
    dog->getBrain()->addIdea("Ouaf x2");
    std::cout << *(dog->getBrain()) << " " << std::endl;
    const Dog* copyDog = new Dog(*dog);
    std::cout << *(copyDog) << " " << std::endl;
    std::cout << *(copyDog->getBrain()) << " " << std::endl;
    std::cout << "Adding a third idea to original dog, both should have different ideas" << std::endl;
    dog->getBrain()->addIdea("Ouaf x3");
    std::cout << *(dog->getBrain()) << " " << std::endl;
    std::cout << *(copyDog->getBrain()) << " " << std::endl;
    delete dog;
    delete copyDog;
    std::cout << std::endl;
}

void
    deepCopyCatTest() {
    std::cout << "DEEP COPY TEST FOR CAT" << std::endl;
    const Cat* cat = new Cat();
    std::cout << *cat << " " << std::endl;
    cat->getBrain()->addIdea("Meow x1");
    cat->getBrain()->addIdea("Meow x2");
    std::cout << *(cat->getBrain()) << " " << std::endl;
    const Cat* copyCat = new Cat(*cat);
    std::cout << *(copyCat) << " " << std::endl;
    std::cout << *(copyCat->getBrain()) << " " << std::endl;
    std::cout << "Adding a third idea to original cat, both should have different ideas" << std::endl;
    cat->getBrain()->addIdea("Meow x3");
    std::cout << *(cat->getBrain()) << " " << std::endl;
    std::cout << *(copyCat->getBrain()) << " " << std::endl;
    delete cat;
    delete copyCat;
    std::cout << std::endl;
}

void
    deleteTest(int count) {
    Animal  *animals[count];
    std::cout << "CREATING A LIST OF " << count << " ANIMALS"  << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < count; i++) {
        if (i < (count / 2)) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "DELETING THE LIST OF " << count << " ANIMALS"  << std::endl;

    for (int i = 0; i < count; i++) {
        delete animals[i];
        std::cout << std::endl;
    }
}

int main(void) {
    deepCopyTest();
    deepCopyCatTest();
    deleteTest(10);
}
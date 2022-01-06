/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:57:30 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/06 18:59:11 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void
    deepCopyTest() {
    std::cout << "Good test case" << std::endl;
    const Dog* dog = new Dog();
    std::cout << *dog << " " << std::endl;
    // dog->getBrain()->ideas[0] = "An idea";
    // dog->getBrain()->ideas[1] = "Another idea";
    dog->getBrain()->addIdea("First idea");
    dog->getBrain()->addIdea("Second idea");

    std::cout << *(dog->getBrain()) << " " << std::endl;
    const Dog* copyDog = new Dog(*dog);
    std::cout << *(copyDog) << " " << std::endl;
    std::cout << *(copyDog->getBrain()) << " " << std::endl;

    std::cout << "Adding a third idea to original dog, both should have different ideas" << std::endl;
    // dog->getBrain()->ideas[2] = "Third idea";
    dog->getBrain()->addIdea("Third idea");

    std::cout << *(dog->getBrain()) << " " << std::endl;
    std::cout << *(copyDog->getBrain()) << " " << std::endl;
    delete dog;
    delete copyDog;
}

void
    deleteTest(int count) {
    Animal  *animals[count];
    // Animal  *animals = new Animals[Count];
    // delete[] animals
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
    deleteTest(10);
}
//
// Created by Attack Cristina on 10.08.2022.
//

#include "Cat.h"
#include "Dog.h"

int main(void){

    std::cout << std::endl << "----- Create 10 animals -----" << std::endl;

    Animal* animals[10];

    for (int i = 0; i < 10; i++) {
        std::cout << std::endl << i << std::endl;
        if (i % 2 == 0) {
            animals[i] = new Cat();
        } else {
            animals[i] = new Dog();
        }
    }

    std::cout << std::endl << "----- 0 -> make sound -----" << std::endl << std::endl;
    animals[0]->makeSound();

    std::cout << std::endl << "----- Kill 10 animals -----" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << std::endl << i << std::endl;
        delete animals[i];
    }

    std::cout << std::endl << "----- Check deep copy -----" << std::endl << std::endl;
    Cat cat1;
    std::cout << std::endl;
    Cat cat2(cat1);
    std::cout << std::endl;

    return 0;
}
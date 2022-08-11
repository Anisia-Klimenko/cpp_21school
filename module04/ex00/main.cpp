//
// Created by Attack Cristina on 10.08.2022.
//

#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main(void){

    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl << "----- Get Type -----" << std::endl << std::endl;

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    std::cout << std::endl << "----- Make sounds -----" << std::endl << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;

    delete animal;
    delete dog;
    delete cat;

    std::cout << std::endl << "##############################" << std::endl;

    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << std::endl << "----- Get Type -----" << std::endl << std::endl;

    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    std::cout << std::endl << "----- Make sounds -----" << std::endl << std::endl;

    wrongAnimal->makeSound();
    wrongCat->makeSound();

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;

    delete wrongAnimal;
    delete wrongCat;

    std::cout << std::endl;

    return 0;
}
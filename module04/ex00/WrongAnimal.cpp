//
// Created by Attack Cristina on 10.08.2022.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("DefaultWrongAnimalType") {
    std::cout << "WrongAnimal constructor: default" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
    std::cout << "WrongAnimal constructor (copy), type: " << type << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    this->type = src.getType();
    return *this;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << " * strange default noise * " << std::endl;
}
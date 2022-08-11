//
// Created by Attack Cristina on 10.08.2022.
//

#include "Animal.h"

Animal::Animal() : type("DefaultAnimalType") {
    std::cout << "Animal constructor: default" << std::endl;
}

Animal::Animal(const Animal &src) {
    *this = src;
    std::cout << "Animal constructor (copy), type: " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &src) {
    this->type = src.getType();
    return *this;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << " * strange default noise * " << std::endl;
}
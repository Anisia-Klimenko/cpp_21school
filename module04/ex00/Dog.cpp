//
// Created by Attack Cristina on 10.08.2022.
//

#include "Dog.h"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor: default" << std::endl;
}

Dog::Dog(const Dog &src) {
    *this = src;
    std::cout << "Dog constructor (copy)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    type = src.getType();
    return *this;
}

std::string Dog::getType() const {
    return type;
}

void Dog::makeSound() const {
    std::cout << " * Bark-bark * " << std::endl;
}
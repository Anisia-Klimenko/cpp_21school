//
// Created by Attack Cristina on 10.08.2022.
//

#include "Dog.h"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor: default" << std::endl;
}

Dog::Dog(const Dog &src) {
    *this = src;
    std::cout << "Dog constructor (copy)" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    type = src.getType();
    brain = new Brain(*src.brain);
    return *this;
}

std::string Dog::getType() const {
    return type;
}

void Dog::makeSound() const {
    std::cout << " * Bark-bark * " << std::endl;
}
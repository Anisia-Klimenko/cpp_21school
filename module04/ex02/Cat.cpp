//
// Created by Attack Cristina on 10.08.2022.
//

#include "Cat.h"

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor: default" << std::endl;
}

Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "Cat constructor (copy)" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    type = src.getType();
    brain = new Brain(*src.brain);
    return *this;
}

std::string Cat::getType() const {
    return type;
}

void Cat::makeSound() const {
    std::cout << " * Meeeeooooow * " << std::endl;
}
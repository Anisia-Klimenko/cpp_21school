//
// Created by Attack Cristina on 10.08.2022.
//

#include "Cat.h"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor: default" << std::endl;
}

Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "Cat constructor (copy)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    type = src.getType();
    return *this;
}

std::string Cat::getType() const {
    return type;
}

void Cat::makeSound() const {
    std::cout << " * Meeeeooooow * " << std::endl;
}
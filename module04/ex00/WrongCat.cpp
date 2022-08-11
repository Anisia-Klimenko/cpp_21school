//
// Created by Attack Cristina on 10.08.2022.
//

#include "WrongCat.h"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor: default" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
    *this = src;
    std::cout << "WrongCat constructor (copy)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

std::string WrongCat::getType() const {
    return type;
}

void WrongCat::makeSound() const {
    std::cout << " * Meeeeooooow * " << std::endl;
}
//
// Created by Attack Cristina on 11.08.2022.
//

#include "Ice.h"

Ice::Ice() {
    type = "ice";
}

Ice::Ice(const Ice &src) {
    *this = src;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &src) {
    type = src.getType();
    return *this;
}

AMateria *Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
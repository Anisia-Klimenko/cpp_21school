//
// Created by Attack Cristina on 11.08.2022.
//

#include "Cure.h"

Cure::Cure() {
    type = "cure";
}

Cure::Cure(const Cure &src) {
    *this = src;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &src) {
    type = src.getType();
    return *this;
}

AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
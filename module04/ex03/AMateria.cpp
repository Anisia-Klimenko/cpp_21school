//
// Created by Attack Cristina on 11.08.2022.
//

#include "AMateria.h"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) {
    this->type = type;
}

AMateria::AMateria(const AMateria &src) {
    *this = src;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &src) {
    type = src.getType();
    return *this;
}

const std::string &AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "* some action with some materia on " << target.getName() << " *" << std::endl;
}
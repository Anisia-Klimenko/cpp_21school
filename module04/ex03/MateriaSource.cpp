//
// Created by Attack Cristina on 11.08.2022.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        sourceSlots[i] = NULL;
    }
    std::cout << "MateriaSource constructor: default" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
    *this = src;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if (sourceSlots[i]) {
            delete sourceSlots[i];
        }
    }
    std::cout << "MateriaSource destructor: default" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
    for (int i = 0; i < 4; i++) {
        if (sourceSlots[i]) {
            delete sourceSlots[i];
        }

        if (src.sourceSlots[i]) {
            sourceSlots[i] = src.sourceSlots[i]->clone();
        } else {
            sourceSlots[i] = NULL;
        }
    }

    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (!m) {
        return;
    }

    for (int i = 0; i < 4; ++i) {
        if (!sourceSlots[i]) {
            sourceSlots[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; ++i) {
        if (sourceSlots[i] != NULL) {
            if (!sourceSlots[i]->getType().compare(type)) {
                return sourceSlots[i]->clone();
            }
        }
    }

    return NULL;
}
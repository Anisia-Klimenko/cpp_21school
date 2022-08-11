//
// Created by Attack Cristina on 11.08.2022.
//

#include "Character.h"

Character::Character() {
    name = "DefaultCharacterName";
    for (int i = 0; i < 4; ++i) {
        slots[i] = NULL;
        left[i] = NULL;
    }
    std::cout << "Character constructor: default" << std::endl;
}

Character::Character(std::string name) {
    this->name = name;
    for (int i = 0; i < 4; ++i) {
        slots[i] = NULL;
        left[i] = NULL;
    }
    std::cout << "Character constructor: " << name << std::endl;
}

Character::Character(const Character &src) {
    *this = src;
}

Character &Character::operator=(const Character &src) {
    name = src.getName();
    for (int i = 0; i < 4; i++) {
        left[i] = NULL;
        if (slots[i] != NULL) {
            delete slots[i];
        }

        if (src.slots[i] != NULL) {
            slots[i] = src.slots[i]->clone();
        } else {
            slots[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i <4; ++i) {
        delete slots[i];
        delete left[i];
    }
    std::cout << "Character destructor: " << name << std::endl;
}

const std::string &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    if (!m) {
        return;
    }

    for (int i = 0; i < 4; ++i) {
        if (!slots[i]) {
            slots[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
        return;
    }
    leftMateria(slots[idx]);
    slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (slots[idx] != NULL) {
        slots[idx]->use(target);
    }
}

void Character::leftMateria(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (left[i] != NULL) {
            left[i] = m;
            return;
        }
    }

    for (int i = 0; i <4; ++i) {
        delete left[i];
    }
    leftMateria(m);
}
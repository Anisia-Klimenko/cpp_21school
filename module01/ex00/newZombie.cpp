//
// Created by Attack Cristina on 04.08.2022.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
//
// Created by Attack Cristina on 04.08.2022.
//

#include "Zombie.hpp"

void randomChump (std::string name) {
    Zombie zombie = Zombie(name);
    zombie.announce();
}
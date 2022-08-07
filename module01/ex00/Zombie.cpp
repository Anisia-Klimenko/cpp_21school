//
// Created by Attack Cristina on 04.08.2022.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Default zombie") {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is dead!" << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
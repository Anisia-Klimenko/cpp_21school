//
// Created by Attack Cristina on 09.08.2022.
//

#include "FragTrap.h"

FragTrap::FragTrap() {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->MAX_HIT = 100;
    std::cout << "Default FragTrap created" << std::endl;
    stats();
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->MAX_HIT = 100;
    std::cout << "FragTrap " << name << " created" << std::endl;
    stats();
}

FragTrap::FragTrap(const FragTrap& src) {
    std::cout << "Copy FragTrap " << src.getName() << " created" << std::endl;
    *this = src;
    stats();
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::hiveFivesGuys() {
    std::cout << "FragTrap " << name << " gives high five!" << std::endl;
}
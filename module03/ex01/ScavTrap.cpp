//
// Created by Attack Cristina on 09.08.2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->MAX_HIT = 100;
    std::cout << "Default ScavTrap created" << std::endl;
    stats();
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->MAX_HIT = 100;
    std::cout << "ScavTrap " << name << " created" << std::endl;
    stats();
}

ScavTrap::ScavTrap(const ScavTrap& src) {
    std::cout << "Copy ScavTrap " << src.getName() << " created" << std::endl;
    *this = src;
    stats();
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        return;
    }

    this->energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target <<", causing " << attackDamage << " points of damage!\n";
    stats();
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode\n";
}

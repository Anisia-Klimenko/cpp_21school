//
// Created by Attack Cristina on 09.08.2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
    this->hitPoints = 20;
    this->energyPoints = 20;
    this->attackDamage = 20;
    this->MAX_HIT = 20;
    std::cout << "Default ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->hitPoints = 20;
    this->energyPoints = 20;
    this->attackDamage = 20;
    this->MAX_HIT = 20;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
    std::cout << "Copy ScavTrap " << src.getName() << " created" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "ScavTrap " << name << " has no energy or no hit!\n";
        return;
    }

    this->energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target <<", causing " << attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode\n";
}

void ScavTrap::stats() {
    std::cout << "\tScavTrap -> " << name << " (attack damage: " << attackDamage << ")" << std::endl;
    std::cout << "\t-------------" << std::endl;
    std::cout << "\tHIT\t| " << hitPoints << std::endl;
    std::cout << "\tENERGY\t| " << energyPoints << std::endl;
    std::cout << "\t-------------" << std::endl;
}

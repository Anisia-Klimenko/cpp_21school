//
// Created by Attack Cristina on 09.08.2022.
//

#include "FragTrap.h"

FragTrap::FragTrap() {
    this->hitPoints = 30;
    this->energyPoints = 30;
    this->attackDamage = 30;
    this->MAX_HIT = 30;
    std::cout << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->hitPoints = 30;
    this->energyPoints = 30;
    this->attackDamage = 30;
    this->MAX_HIT = 30;
    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
    std::cout << "Copy FragTrap " << src.getName() << " created" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "FragTrap " << name << " has no energy or no hit!\n";
        return;
    }

    this->energyPoints--;
    std::cout << "FragTrap " << name << " attacks " << target <<", causing " << attackDamage << " points of damage!\n";
}

void FragTrap::hiveFivesGuys() {
    std::cout << "FragTrap " << name << " gives high five!" << std::endl;
}

void FragTrap::stats() {
    std::cout << "\tFragTrap -> " << name << " (attack damage: " << attackDamage << ")" << std::endl;
    std::cout << "\t-------------" << std::endl;
    std::cout << "\tHIT\t| " << hitPoints << std::endl;
    std::cout << "\tENERGY\t| " << energyPoints << std::endl;
    std::cout << "\t-------------" << std::endl;
}
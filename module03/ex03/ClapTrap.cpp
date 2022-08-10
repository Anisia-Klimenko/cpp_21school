//
// Created by Attack Cristina on 09.08.2022.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() : name("Default ClapTrapName"), hitPoints(10), energyPoints(10), attackDamage(0), MAX_HIT(10) {
    std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0), MAX_HIT(10) {
    std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : MAX_HIT(10) {
    std::cout << "Copy ClapTrap " << src.getName() << " created" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}

std::string ClapTrap::getName() const {
    return this->name;
}

void ClapTrap::setHit(int amount) {
    this->hitPoints = amount;
}

int ClapTrap::getHit() const {
    return this->hitPoints;
}

void ClapTrap::setEnergy(int amount) {
    this->energyPoints = amount;
}

int ClapTrap::getEnergy() const {
    return this->energyPoints;
}

void ClapTrap::setDamage(int amount) {
    this->attackDamage = amount;
}

int ClapTrap::getDamage() const {
    return this->attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & src) {
    this->name = src.getName();
    this->hitPoints = src.getHit();
    this->energyPoints = src.getEnergy();
    this->attackDamage = src.getDamage();

    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if (this->energyPoints == 0 || this->hitPoints == 0) {
        std::cout << "ClapTrap " << name << " has no energy or no hit!\n";
        return;
    }

    this->energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target <<", causing " << attackDamage << " points of damage!\n";
    stats();
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints - amount >= 0) {
        this->hitPoints -= amount;
    } else {
        this->hitPoints = 0;
    }

    std::cout << "ClapTrap " << name << " takes " << amount <<" damage!\n";
    stats();
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints == 0) {
        std::cout << "ClapTrap " << name << " has no energy!\n";
        return;
    }

    this->energyPoints--;

    if (this->hitPoints + amount <= MAX_HIT) {
        this->hitPoints += amount;
    } else {
        this->hitPoints = MAX_HIT;
    }

    std::cout << "ClapTrap " << name << " takes " << amount <<" repair!\n";
    stats();
}

void ClapTrap::stats() {
    std::cout << "\tClapTrap -> " << name << " (attack damage: " << attackDamage << ")" << std::endl;
    std::cout << "\t-------------" << std::endl;
    std::cout << "\tHIT\t| " << hitPoints << std::endl;
    std::cout << "\tENERGY\t| " << energyPoints << std::endl;
    std::cout << "\t-------------" << std::endl;

}
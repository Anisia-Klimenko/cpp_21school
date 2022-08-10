//
// Created by Attack Cristina on 09.08.2022.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() {
    this->name = "Default DiamondName";
    setHit(FragTrap::hitPoints);
    setEnergy(ScavTrap::energyPoints);
    setDamage(FragTrap::attackDamage);
    ClapTrap::MAX_HIT = getHit();
    std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
    this->name = name;
    setHit(FragTrap::hitPoints);
    setEnergy(ScavTrap::energyPoints);
    setDamage(FragTrap::attackDamage);
    ClapTrap::MAX_HIT = getHit();
    std::cout << "DiamondTrap " << this->name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::stats() {
    std::cout << "\tDiamondTrap -> " << this->name << " (attack damage: " << getDamage() << ")" << std::endl;
    std::cout << "\t-------------" << std::endl;
    std::cout << "\tHIT\t| " << getHit() << std::endl;
    std::cout << "\tENERGY\t| " << getEnergy() << std::endl;
    std::cout << "\t-------------" << std::endl;
}
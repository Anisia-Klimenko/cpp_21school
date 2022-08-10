//
// Created by Attack Cristina on 09.08.2022.
//

#include "ScavTrap.h"

int main(void) {
    ScavTrap jack("Jack");
    ScavTrap sam("Sam");

    jack.attack("Sam");
    sam.takeDamage(jack.getDamage());
    sam.beRepaired(10);
    jack.guardGate();

    return 0;
}
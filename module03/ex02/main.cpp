//
// Created by Attack Cristina on 09.08.2022.
//

#include "FragTrap.h"

int main(void) {
    FragTrap jack("Jack");
    FragTrap sam("Sam");

    jack.attack("Sam");
    sam.takeDamage(jack.getDamage());
    sam.beRepaired(10);
    jack.hiveFivesGuys();

    return 0;
}
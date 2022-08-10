//
// Created by Attack Cristina on 09.08.2022.
//

#include "ClapTrap.h"

int main(void) {
    ClapTrap jack("Jack");
    ClapTrap sam("Sam");

    jack.attack("Sam");
    sam.takeDamage(2);
    sam.beRepaired(3);
    return 0;
}
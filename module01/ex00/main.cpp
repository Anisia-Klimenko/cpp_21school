//
// Created by Attack Cristina on 04.08.2022.
//

#include <iostream>
#include "Zombie.hpp"

int main(void) {
    Zombie zombieStack("Freddy");
    zombieStack.announce();

    Zombie *zombieHeap = newZombie("Stan");
    zombieHeap->announce();

    randomChump("Carry");

    delete zombieHeap;

    return 0;
}
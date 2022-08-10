//
// Created by Attack Cristina on 09.08.2022.
//

#include "DiamondTrap.h"

int main(void) {
    std::cout << std::endl << "------Create traps (parents -> 2 constructors, son -> 4 constructors)-------" << std::endl << std::endl;
    ClapTrap grand("GrandFather");
    ScavTrap father("Father");
    FragTrap mother("Mother");
    DiamondTrap son("Son");

    std::cout << std::endl << "------Show stats (son has father's and mother's points)-------" << std::endl << std::endl;
    grand.stats();
    father.stats();
    mother.stats();
    son.stats();

    std::cout << std::endl << "------Who am I (son's mothod -> show own and grany's name)-------" << std::endl << std::endl;
    son.whoAmI();

    std::cout << std::endl << "------ScavTrap method (son envokes father's method)-------" << std::endl << std::endl;
    son.guardGate();

    std::cout << std::endl << "------FragTrap method (son envokes mother's method)-------" << std::endl << std::endl;
    son.hiveFivesGuys();

    std::cout << std::endl << "------Attack (father's, mother's, son's (= father's) methods)-------" << std::endl << std::endl;
    son.ScavTrap::attack("test1");
    son.FragTrap::attack("test2");
    son.attack("test3");

    std::cout << std::endl << "------Destructors  (parents -> 2 destructors, son -> 4 destructors)-------" << std::endl << std::endl;
    return 0;
}
//
// Created by Attack Cristina on 07.08.2022.
//

#include <iostream>
#include "Harl.h"

int main(void) {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("Wrong level");

    return 0;
}
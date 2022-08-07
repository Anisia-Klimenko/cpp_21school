//
// Created by Attack Cristina on 07.08.2022.
//

#include <iostream>
#include "Harl.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: level" << std::endl;
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);

    return 0;
}
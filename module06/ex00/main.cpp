//
// Created by Attack Cristina on 13.08.2022.
//

#include <iostream>
#include "Converter.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: literal2convert" << std::endl;
        return 1;
    }

    Converter converter(argv[1]);
    if (converter.parseString()) {
        converter.showResults();
    } else {
        std::cout << "Type conversion is impossible, wrong input!" << std::endl;
    }

    return 0;
}
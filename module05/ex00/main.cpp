//
// Created by Anisia Klimenko on 11.08.2022.
//

#include "Bureaucrat.h"
#include <iostream>

int main(void) {
    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;

    Bureaucrat Dwight("Dwight Schrute", 149);
    Bureaucrat Michael("Michael Scott", 1);

    std::cout << std::endl << "----- Dwight downgraded -----" << std::endl << std::endl;
    try {
        std::cout << Dwight;
        Dwight.downGrade();
        std::cout << Dwight;
        Dwight.downGrade();
        std::cout << Dwight;
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Michael upgraded -----" << std::endl << std::endl;

    try {
        std::cout << Michael;
        Michael.upGrade();
        std::cout << Michael;
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;

    return 0;
}
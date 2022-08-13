//
// Created by Attack Cristina on 13.08.2022.
//

#include "Bureaucrat.h"
#include "Form.h"

int main(void) {
    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;

    Bureaucrat Dwight("Dwight Schrute", 149);
    Bureaucrat Michael("Michael Scott", 1);
    Form form("For Angela's cake", false, 5, 5);

    std::cout << std::endl << "----- Dwight try to sign -----" << std::endl << std::endl;
    try {
        Dwight.signForm(form);
    } catch (std::exception & e) {
        std::cerr << e.what() << "(nice try, Dwight)" << std::endl;
    }

    std::cout << std::endl << "----- Michael try to sign -----" << std::endl << std::endl;

    try {
        Michael.signForm(form);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Michael try to sign form again -----" << std::endl << std::endl;

    try {
        Michael.signForm(form);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;
    return 0;
}
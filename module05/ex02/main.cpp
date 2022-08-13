//
// Created by Attack Cristina on 13.08.2022.
//

#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(void) {
    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;

    Bureaucrat Dwight("Dwight Schrute", 130);
    Bureaucrat Michael("Michael Scott", 1);
    ShrubberyCreationForm shrubberyCreationForm("tree");
    RobotomyRequestForm robotomyRequestForm("oven");
    PresidentialPardonForm presidentialPardonForm("Luke");

    std::cout << std::endl << "----- Dwight try to sign -----" << std::endl << std::endl;
    try {
        Dwight.signForm(shrubberyCreationForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Dwight.signForm(robotomyRequestForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Dwight.signForm(presidentialPardonForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Michael try to sign -----" << std::endl << std::endl;
    try {
        Michael.signForm(shrubberyCreationForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Michael.signForm(robotomyRequestForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Michael.signForm(presidentialPardonForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Dwight try to execute -----" << std::endl << std::endl;
    try {
        Dwight.executeForm(shrubberyCreationForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Dwight.executeForm(robotomyRequestForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Dwight.executeForm(presidentialPardonForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Michael try to execute -----" << std::endl << std::endl;
    try {
        Michael.executeForm(shrubberyCreationForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Michael.executeForm(robotomyRequestForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Michael.executeForm(presidentialPardonForm);
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;
    return 0;
}
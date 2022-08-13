//
// Created by Attack Cristina on 13.08.2022.
//

#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main(void) {
    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;

    Intern intern;
    Form *form;

    std::cout << std::endl << "----- Intern creates a form -----" << std::endl << std::endl;

    form = intern.makeForm("robotomy", "testTarget");

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;
    delete form;
    return 0;
}
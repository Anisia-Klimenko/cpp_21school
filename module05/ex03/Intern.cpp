//
// Created by Attack Cristina on 13.08.2022.
//

#include "Intern.h"

Intern::Intern() {
    std::cout << "Intern created!" << std::endl;
}

Intern::Intern(const Intern &src) {
    *this = src;
}

Intern &Intern::operator=(const Intern &src) {
    (void) src;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern destroyed!" << std::endl;
}

Form* Intern::makeForm(std::string name, std::string target) {
    std::string names[3] = {"shrubbery creation form",
                            "robotomy request form",
                            "presidential pardon form"};
    Form *forms[3] = {new ShrubberyCreationForm(target),
                      new RobotomyRequestForm(target),
                      new PresidentialPardonForm(target)};

    std::string nameLowerCase = "";
    for (size_t i = 0; i < name.length(); i++) {
        nameLowerCase += tolower(name[i]);
    }

    Form *form;

    for (int i = 0; i < 3; ++i) {
        if (names[i].rfind(nameLowerCase, 0) == 0) {
            form = forms[i];
            std::cout << "Intern creates " << *form << std::endl;
            for (int j = i + 1; j < 3; ++j) {
                delete forms[j];
            }
            return form;
        } else {
            delete forms[i];
        }
    }

    std::cerr << "Form: " << name << " doesn't exist" << std::endl;
    return NULL;
}
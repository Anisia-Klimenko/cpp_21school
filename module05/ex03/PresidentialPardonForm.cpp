//
// Created by Attack Cristina on 13.08.2022.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() :
        Form("Presidential Pardon Form", false, 25, 5), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        Form("Presidential Pardon Form", false, 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
        Form(src), target(src.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this != &src) {
        isSigned = src.isSigned;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential Pardon Form destroyed!" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const {
    return target;
}

void PresidentialPardonForm::execute(const Bureaucrat &man) const {
    if (!getIsSigned()) {
        std::cerr << "Permission denied: form is not signed!" << std::endl;
    }

    if (man.getGrade() >= this->getGradeToExecute()) {
        throw Form::GradeTooLowException();
    }

    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
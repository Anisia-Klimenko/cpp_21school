//
// Created by Attack Cristina on 13.08.2022.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() :
        Form("Robotomy Request Form", false, 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        Form("Robotomy Request Form", false, 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
        Form(src), target(src.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this != &src) {
        isSigned = src.isSigned;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Robotomy Request Form destroyed!" << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const {
    return target;
}

void RobotomyRequestForm::execute(const Bureaucrat &man) const {
    if (!getIsSigned()) {
        std::cerr << "Permission denied: form is not signed!" << std::endl;
    }
    if (man.getGrade() >= this->getGradeToExecute()) {
        throw Form::GradeTooLowException();
    }

    std::srand(std::time(nullptr));
    if (std::rand() % 2 == 1) {
        std::cout << target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << "The robotomy failed" << std::endl;
    }
}
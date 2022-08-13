//
// Created by Attack Cristina on 13.08.2022.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() :
    Form("Shrubbery Creation Form", false, 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("Shrubbery Creation Form", false, 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
    Form(src), target(src.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    if (this != &src) {
        isSigned = src.isSigned;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Shrubbery Creation Form destroyed!" << std::endl;
}

const std::string &ShrubberyCreationForm::getTarget() const {
    return target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& man) const {
    if (!getIsSigned()) {
        std::cerr << "Permission denied: form is not signed!" << std::endl;
    }

    if (man.getGrade() >= this->getGradeToExecute()) {
        throw Form::GradeTooLowException();
    }

    std::ofstream ofstream(target + "_shrubbery");

    ofstream << "          .     .  .      +     .      .          .\n"
                "     .       .      .     #       .           .\n"
                "        .      .         ###            .      .      .\n"
                "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
                "          .      . \"####\"###\"####\"  .\n"
                "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
                "  .             \"#########\"#########\"        .        .\n"
                "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
                "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
                "                .\"##\"#####\"#####\"##\"           .      .\n"
                "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
                "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
                "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
                "            .     \"      000      \"    .     .\n"
                "       .         .   .   000     .        .       .\n"
                ".. .. ..................O000O........................ ......";

    ofstream.close();
}
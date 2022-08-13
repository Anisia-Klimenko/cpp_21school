//
// Created by Attack Cristina on 13.08.2022.
//

#include "Form.h"

Form::Form() : name("EmptyForm"), isSigned(false), gradeToSign(150), gradeToExecute(150){
    std::cout << "Empty form created" << std::endl;
}

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute) :
    name(name), isSigned(isSigned), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }

    std::cout << "Form " << name << " created" << std::endl;
}

Form::Form(const Form &src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute){
    *this = src;
}

Form &Form::operator=(const Form &src) {
    if (this != &src) {
        isSigned = src.isSigned;
    }
    return *this;
}

Form::~Form() {
    std::cout << "Form destroyed!" << std::endl;
}

const std::string &Form::getName() const {
    return name;
}

const bool &Form::getIsSigned() const {
    return isSigned;
}

const int &Form::getGradeToSign() const {
    return gradeToSign;
}

const int &Form::getGradeToExecute() const {
    return gradeToExecute;
}

void Form::beSigned(const Bureaucrat &man) {
    if (man.getGrade() <= gradeToSign) {
        isSigned = true;
    } else {
        throw Form::GradeTooLowException();
    }
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form " << (form.getIsSigned() ? "is signed" : "is not signed") << " (grade to sign: " << form.getGradeToSign()
        << ", grade to execute: " << form.getGradeToExecute() << ")";
    return out;
}
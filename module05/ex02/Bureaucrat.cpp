//
// Created by Anisia Klimenko on 11.08.2022.
//

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("Default") {
    std::cout << "New trainee is in office" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    std::cout << name << " (grade: " << grade << ") came to work" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
    name = src.name;
    grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << name << " left office" << std::endl;
}

std::string const &Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::upGrade() {
    grade--;
    if (grade < 1) {
        grade++;
        throw Bureaucrat::GradeTooHighException();
    }
}

void Bureaucrat::downGrade() {
    grade++;
    if (grade > 150) {
        grade--;
        throw Bureaucrat::GradeTooLowException();
    }
}

void Bureaucrat::signForm(Form &form) {
    if (form.getIsSigned()) {
        std::cout << "Form is already signed!" << std::endl;
        return;
    }

    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    } catch (std::exception & e) {
        std::cerr << *this << " couldn't sign " << form << " because too low grade" << std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form) {
    form.execute(*this);
    std::cout << *this << " executed " << form << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Permission denied: grade can't be lower than 150");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Permission denied: grade can't be higher than 1");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& buddy) {
    out << buddy.getName() << ", bureaucrat grade " << buddy.getGrade();
    return out;
}
//
// Created by Attack Cristina on 13.08.2022.
//

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {
private:
    std::string const name;
    bool isSigned;
    int const gradeToSign;
    int const gradeToExecute;

public:
    Form( void );
    Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
    Form( const Form& );
    virtual ~Form( void );

    Form& operator=( const Form& );

    std::string const& getName( void ) const;
    bool const& getIsSigned( void ) const;
    int const& getGradeToSign( void ) const;
    int const& getGradeToExecute( void ) const;

    void beSigned( const Bureaucrat& man );

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif //FORM_H

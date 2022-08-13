//
// Created by Attack Cristina on 13.08.2022.
//

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern {
public:
    Intern( void );
    Intern( const Intern& );
    virtual ~Intern( void );

    Intern& operator=( const Intern& );

    Form* makeForm(std::string name, std::string target);
};


#endif //INTERN_H

//
// Created by Attack Cristina on 13.08.2022.
//

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {
private:
    std::string target;

public:
    RobotomyRequestForm( void );
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RobotomyRequestForm& );
    virtual ~RobotomyRequestForm( void );

    RobotomyRequestForm& operator=( const RobotomyRequestForm& );

    std::string const& getTarget( void ) const;

    virtual void execute( const Bureaucrat& man ) const;
};


#endif //ROBOTOMYREQUESTFORM_H

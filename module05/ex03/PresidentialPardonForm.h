//
// Created by Attack Cristina on 13.08.2022.
//

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"
#include <iostream>

class PresidentialPardonForm : public Form {
private:
    std::string target;

public:
    PresidentialPardonForm( void );
    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( const PresidentialPardonForm& );
    virtual ~PresidentialPardonForm( void );

    PresidentialPardonForm& operator=( const PresidentialPardonForm& );

    std::string const& getTarget( void ) const;

    virtual void execute( const Bureaucrat& man ) const;
};


#endif //PRESIDENTIALPARDONFORM_H

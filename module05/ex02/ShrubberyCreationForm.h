//
// Created by Attack Cristina on 13.08.2022.
//

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
    std::string target;

public:
    ShrubberyCreationForm( void );
    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( const ShrubberyCreationForm& );
    virtual ~ShrubberyCreationForm( void );

    ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );

    std::string const& getTarget( void ) const;

    virtual void execute( const Bureaucrat& man ) const;
};


#endif //SHRUBBERYCREATIONFORM_H

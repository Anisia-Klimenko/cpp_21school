//
// Created by Anisia Klimenko on 11.08.2022.
//

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat {
protected:
    std::string name;
    int grade;

public:
    Bureaucrat( void );
    Bureaucrat( std::string name, int grade);
    Bureaucrat( const Bureaucrat& );
    virtual ~Bureaucrat( void );

    Bureaucrat& operator=( const Bureaucrat& );

    std::string const& getName( void ) const;
    int getGrade( void ) const;

    void upGrade( void );
    void downGrade( void );

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& buddy);

#endif //BUREAUCRAT_H

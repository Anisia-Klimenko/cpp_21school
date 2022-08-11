//
// Created by Attack Cristina on 10.08.2022.
//

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog( void );
    Dog( const Dog& );
    virtual ~Dog( void );

    Dog& operator=( const Dog& );

    virtual void makeSound( void ) const;
    virtual std::string getType( void ) const;
};


#endif //DOG_H

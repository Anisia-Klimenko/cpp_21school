//
// Created by Attack Cristina on 10.08.2022.
//

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal( void );
    Animal ( const Animal& );
    virtual ~Animal( void );

    Animal& operator=( const Animal& );

    virtual void makeSound( void ) const;
    virtual std::string getType( void ) const;
};


#endif //ANIMAL_H

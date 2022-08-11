//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>
#include "AMateria.h"

class AMateria;

class ICharacter {
public:
    virtual ~ICharacter( void ) {}
    virtual std::string const & getName( void ) const = 0;
    virtual void equip( AMateria* m ) = 0;
    virtual void unequip( int idx ) = 0;
    virtual void use( int idx, ICharacter& target ) = 0;
};

#endif //ICHARACTER_H

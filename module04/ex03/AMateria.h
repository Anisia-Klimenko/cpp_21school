//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class ICharacter;

class AMateria {
protected:
    std::string type;

public:
    AMateria( void );
    AMateria( std::string const & type );
    AMateria( const AMateria& );
    virtual ~AMateria( void );

    AMateria& operator=( const AMateria& );

    std::string const & getType( void ) const;
    virtual AMateria* clone( void ) const = 0;
    virtual void use( ICharacter& target );
};


#endif //AMATERIA_H

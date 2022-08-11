//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure : public AMateria {
public:
    Cure( void );
    Cure( const Cure& );
    virtual ~Cure( void );

    Cure& operator=( const Cure& );

    virtual AMateria* clone( void ) const;
    virtual void use( ICharacter& target );
};


#endif //CURE_H

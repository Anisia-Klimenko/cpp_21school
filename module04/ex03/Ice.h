//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice : public AMateria {
public:
    Ice( void );
    Ice( const Ice& );
    virtual ~Ice( void );

    Ice& operator=( const Ice& );

    virtual AMateria* clone( void ) const;
    virtual void use( ICharacter& target );
};


#endif //ICE_H

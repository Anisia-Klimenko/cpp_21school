//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"

class Character : public ICharacter {
protected:
    std::string name;
    AMateria *slots[4];
    AMateria *left[4];

public:
    Character( void );
    Character( std::string name );
    Character( const Character& );
    virtual ~Character( void );

    Character& operator=( const Character& );

    virtual std::string const & getName( void ) const;

    virtual void equip( AMateria* m );
    virtual void unequip( int idx );
    virtual void use( int idx, ICharacter& target );

    void leftMateria( AMateria* m );
};


#endif //CHARACTER_H

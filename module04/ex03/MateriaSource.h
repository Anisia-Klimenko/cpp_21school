//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
protected:
    AMateria* sourceSlots[4];

public:
    MateriaSource( void );
    MateriaSource( const MateriaSource& );
    virtual ~MateriaSource( void );

    MateriaSource& operator=( const MateriaSource& );

    virtual void learnMateria( AMateria* );
    virtual AMateria* createMateria( std::string const & type );
};


#endif //MATERIASOURCE_H

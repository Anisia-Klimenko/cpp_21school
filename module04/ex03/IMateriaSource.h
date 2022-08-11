//
// Created by Attack Cristina on 11.08.2022.
//

#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include "AMateria.h"

class IMateriaSource {
public:
    virtual ~IMateriaSource( void ) {}
    virtual void learnMateria( AMateria* ) = 0;
    virtual AMateria* createMateria( std::string const & type ) = 0;
};

#endif //IMATERIASOURCE_H

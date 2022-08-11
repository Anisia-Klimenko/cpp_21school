//
// Created by Attack Cristina on 10.08.2022.
//

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
public:
    WrongCat( void );
    WrongCat( const WrongCat& );
    ~WrongCat( void );

    void makeSound( void ) const;
    std::string getType( void ) const;
};


#endif //WRONGCAT_H

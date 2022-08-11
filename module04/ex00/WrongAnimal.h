//
// Created by Attack Cristina on 10.08.2022.
//

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal( void );
    WrongAnimal ( const WrongAnimal& );
    ~WrongAnimal( void );

    WrongAnimal& operator=( const WrongAnimal& );

    void makeSound( void ) const;
    std::string getType( void ) const;
};


#endif //WRONGANIMAL_H

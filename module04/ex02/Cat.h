//
// Created by Attack Cristina on 10.08.2022.
//

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
private:
    Brain* brain;
public:
    Cat( void );
    Cat( const Cat& );
    virtual ~Cat( void );

    Cat& operator=( const Cat& );

    virtual void makeSound( void ) const;
    virtual std::string getType( void ) const;
};


#endif //CAT_H

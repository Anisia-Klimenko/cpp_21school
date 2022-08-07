//
// Created by Attack Cristina on 04.08.2022.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie( void );
    Zombie( std::string name );
    ~Zombie( void );

    void announce( void );
    void setName( std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP

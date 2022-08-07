//
// Created by Attack Cristina on 07.08.2022.
//

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void message( void );

public:
    Harl( void );
    ~Harl( void );
    void complain( std::string level );
};


#endif //HARL_H

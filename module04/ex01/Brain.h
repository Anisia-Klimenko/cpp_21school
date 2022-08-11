//
// Created by Attack Cristina on 10.08.2022.
//

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
private:
    std::string ideas[100];

public:
    Brain( void );
    Brain( const Brain& );
    ~Brain( void );

    Brain& operator=( const Brain& );
    std::string getIdea( int i ) const;
};


#endif //BRAIN_H

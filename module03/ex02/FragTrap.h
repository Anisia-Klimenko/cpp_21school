//
// Created by Attack Cristina on 09.08.2022.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap& );
    ~FragTrap( void );

    void hiveFivesGuys( void );
};


#endif //FRAGTRAP_H

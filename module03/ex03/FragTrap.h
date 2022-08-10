//
// Created by Attack Cristina on 09.08.2022.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {
protected:
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap& );
    ~FragTrap( void );

    void attack( const std::string& target );

    void hiveFivesGuys( void );
    void stats( void );
};


#endif //FRAGTRAP_H

//
// Created by Attack Cristina on 09.08.2022.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap& );
    ~ScavTrap( void );

    void attack( const std::string& target );

    void guardGate( void );
};


#endif //SCAVTRAP_H

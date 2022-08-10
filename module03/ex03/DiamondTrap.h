//
// Created by Attack Cristina on 09.08.2022.
//

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap& );
    virtual ~DiamondTrap( void );

    void attack( const std::string &target );
    void stats( void );

    void whoAmI( void );
};


#endif //DIAMONDTRAP_H

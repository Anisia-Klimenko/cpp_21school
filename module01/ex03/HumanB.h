//
// Created by Attack Cristina on 05.08.2022.
//

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB( std::string name );
    ~HumanB( void );
    void setWeapon ( Weapon& weapon );
    Weapon* getWeapon ( void );
    void attack( void );
};


#endif //HUMANB_H

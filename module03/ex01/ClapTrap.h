//
// Created by Attack Cristina on 09.08.2022.
//

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

//private:
    unsigned int MAX_HIT;

public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( const ClapTrap& );
    ~ClapTrap( void );

    void setName( std::string name );
    std::string getName( void ) const;
    void setHit( int amount );
    int getHit( void ) const;
    void setEnergy( int amount );
    int getEnergy( void ) const;
    void setDamage( int amount );
    int getDamage( void ) const;

    ClapTrap& operator=( const ClapTrap& );

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

    void stats( void );
};


#endif //CLAPTRAP_H

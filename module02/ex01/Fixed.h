//
// Created by Attack Cristina on 07.08.2022.
//

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
    int value;
    static const int nBits = 8;

public:
    Fixed( void );
    Fixed( const Fixed& );
    Fixed( const int value );
    Fixed( const float value );
    Fixed& operator=( const Fixed& src );
    ~Fixed( void );

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif //FIXED_H

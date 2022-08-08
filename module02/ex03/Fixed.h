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
    ~Fixed( void );

    Fixed& operator=( const Fixed& );

    bool operator>( const Fixed& ) const;
    bool operator<( const Fixed& ) const;
    bool operator>=( const Fixed& ) const;
    bool operator<=( const Fixed& ) const;
    bool operator==( const Fixed& ) const;
    bool operator!=( const Fixed& ) const;

    Fixed operator+( const Fixed& );
    Fixed operator-( const Fixed& );
    Fixed operator*( const Fixed& );
    Fixed operator/( const Fixed& );

    Fixed operator++( void );
    Fixed operator--( void );
    Fixed operator++( int );
    Fixed operator--( int );

    static Fixed& min( Fixed& f1, Fixed& f2);
    static Fixed& max( Fixed& f1, Fixed& f2);
    static const Fixed& min( const Fixed& f1, const Fixed& f2);
    static const Fixed& max( const Fixed& f1, const Fixed& f2);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif //FIXED_H

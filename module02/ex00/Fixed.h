//
// Created by Attack Cristina on 07.08.2022.
//

#ifndef FIXED_H
#define FIXED_H


class Fixed {
private:
    int value;
    static const int nBits = 8;

public:
    Fixed( void );
    Fixed( const Fixed& );
    Fixed& operator=( const Fixed& src );
    ~Fixed( void );

    int getRawBits ( void ) const;
    void setRawBits ( int const raw );
};


#endif //FIXED_H

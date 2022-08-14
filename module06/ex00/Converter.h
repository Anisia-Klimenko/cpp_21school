//
// Created by Attack Cristina on 13.08.2022.
//

#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <sstream>

class Converter {
private:
    std::string input;
    double result;

public:
    Converter( void );
    Converter( std::string input );
    Converter( const Converter& );
    virtual ~Converter( void );

    Converter& operator=( const Converter& );

    std::string toChar( void );
    std::string toInt( void );
    std::string toFloat( void );
    std::string toDouble( void );

    bool parseString( void );
    void showResults( void );

};


#endif //CONVERTER_H

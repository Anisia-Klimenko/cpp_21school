//
// Created by Attack Cristina on 14.08.2022.
//

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template<typename T>
class Array {
private:
    unsigned int arraySize;
    T* data;

public:
    Array( void );
    Array( unsigned int arraySize );
    Array( const Array<T>& );
    virtual ~Array( void );

    Array& operator=( const Array& );
    T& operator[]( int index );

    unsigned int size( void ) const;

    class IndexOutOfRangeException : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif //ARRAY_H

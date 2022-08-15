//
// Created by Attack Cristina on 14.08.2022.
//

#include <iostream>
#include "whatever.h"

template<typename T>
T max(T const& x, T const& y) {
    return (x > y ? x : y);
}

template<typename T>
T min(T const& x, T const& y) {
    return (x < y ? x : y);
}

template<typename T>
void swap(T& x, T& y) {
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
void perform(T& x, T& y) {
    std::cout << "MAX: " << max(x, y) << std::endl;
    std::cout << "MIN: " << min(x, y) << std::endl;
    std::cout << "X: " << x << ", Y: " << y << std::endl;
    std::cout << "SWAP" << std::endl;
    swap(x, y);
    std::cout << "X: " << x << ", Y: " << y << std::endl;
}

//int main(void) {
//    std::cout << std::endl << "----- INT -----" << std::endl;
//    int a = 5, b = 6;
//    perform(a, b);
//
//    std::cout << std::endl << "----- FLOAT -----" << std::endl;
//    float d = 5.23f, e = 6.74f;
//    perform(d, e);
//
//    std::cout << std::endl << "----- CHAR -----" << std::endl;
//    char f = 'f', g = 'g';
//    perform(f, g);
//
//    std::cout << std::endl;
//
//    return 0;
//}

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}
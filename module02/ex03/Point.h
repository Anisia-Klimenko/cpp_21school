//
// Created by Attack Cristina on 08.08.2022.
//

#ifndef POINT_H
#define POINT_H

#include "Fixed.h"
#include <iostream>

class Point {
private:
    Fixed x;
    Fixed y;

public:
    Point( void );
    Point( Fixed x, Fixed y );
    Point( const Point& );
    ~Point( void );

    Point& operator=( const Point& );

    void setX( Fixed x );
    Fixed getX ( void ) const;
    void setY( Fixed y );
    Fixed getY ( void ) const;
};

bool bsp(Point a, Point b, Point c, Point const x);
void show(Point a, Point b, Point c, Point x);

#endif //POINT_H

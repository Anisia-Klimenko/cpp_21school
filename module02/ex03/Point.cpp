//
// Created by Attack Cristina on 08.08.2022.
//

#include "Point.h"
#include <iostream>

Point::Point() : x(0), y(0) {}

Point::Point(Fixed x, Fixed y) : x(x), y(y) {}

Point::~Point() {}

Point::Point(const Point& src) {
    *this = src;
}

Point &Point::operator=(const Point& src) {
    this->x = src.getX();
    this->y = src.getY();
    return *this;
}

void Point::setX(Fixed x) {
    this->x = x;
}

Fixed Point::getX() const {
    return this->x;
}

void Point::setY(Fixed y) {
    this->y = y;
}

Fixed Point::getY() const {
    return this->y;
}
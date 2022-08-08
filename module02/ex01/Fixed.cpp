//
// Created by Attack Cristina on 07.08.2022.
//

#include "Fixed.h"
#include <cmath>

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << nBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << nBits));
}

Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = src.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt() const {
    return (int) (value >> nBits);
}

float Fixed::toFloat() const {
    return (float) ((float) value / (1 << nBits));
}

void Fixed::setRawBits(const int raw) {
    this->value = raw;
}

int Fixed::getRawBits() const {
    return this->value;
}

std::ostream& operator<<(std::ostream& out, const Fixed& src) {
    out << src.toFloat();
    return out;
}
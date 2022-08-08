//
// Created by Attack Cristina on 07.08.2022.
//

#include "Fixed.h"
#include <cmath>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int value) {
    this->value = value << nBits;
}

Fixed::Fixed(const float value) {
    this->value = roundf(value * (1 << nBits));
}

Fixed::Fixed(const Fixed &src) {
    *this = src;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &src) {
    this->value = src.getRawBits();
    return *this;
}

Fixed Fixed::operator*(const Fixed &src) {
    Fixed res(this->toFloat() * src.toFloat());
    return res;
}

Fixed Fixed::operator/(const Fixed &src) {
    Fixed res(this->toFloat() / src.toFloat());
    return res;
}

Fixed Fixed::operator+(const Fixed &src) {
    Fixed res(this->toFloat() + src.toFloat());
    return res;
}

Fixed Fixed::operator-(const Fixed &src) {
    Fixed res(this->toFloat() - src.toFloat());
    return res;
}

Fixed Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed res(*this);
    this->operator++();
    return res;
}

Fixed Fixed::operator--(int) {
    Fixed res(*this);
    this->operator--();
    return res;
}

bool Fixed::operator<(const Fixed &src) const {
    return (this->value < src.getRawBits());
}

bool Fixed::operator>(const Fixed &src) const {
    return (this->value > src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) const {
    return (this->value <= src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) const {
    return (this->value >= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src) const {
    return (this->value == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) const {
    return (this->value != src.getRawBits());
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
    if (f1 < f2) {
        return f1;
    }
    return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
    if (f1 < f2) {
        return f1;
    }
    return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
    if (f1 > f2) {
        return f1;
    }
    return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
    if (f1 > f2) {
        return f1;
    }
    return f2;
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
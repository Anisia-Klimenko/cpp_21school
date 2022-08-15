//
// Created by Attack Cristina on 15.08.2022.
//

#include "Span.h"

Span::Span() : N(0) {
    std::cout << "Empty span created!" << std::endl;
}

Span::Span(unsigned int N) : N(N) {
    std::cout << "Span[" << N << "] created!" << std::endl;
}

Span::Span(const Span &src) {
    *this = src;
    std::cout << "Span copied!" << std::endl;
}

Span &Span::operator=(const Span &src) {
    N = src.N;
    array = src.array;

    return *this;
}

Span::~Span() {
    std::cout << "Span destroyed!" << std::endl;
}

std::vector<int> &Span::getArray() {
    return array;
}

void Span::addNumber(int number) {
    if (array.size() + 1 > N) {
        throw OutOfRangeException();
    }

    array.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end, int number) {
    if (array.begin() == array.end()) {
        array = std::vector<int>(N);
        std::fill(array.begin(), array.end(), number);
    } else {
        std::fill(begin, end, number);
    }
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    std::srand(unsigned(std::time(nullptr)));

    if (array.begin() == array.end()) {
        array = std::vector<int>(N);
        std::generate(array.begin(), array.end(), std::rand);
    } else {
        std::generate(begin, end, std::rand);
    }
}

int Span::shortestSpan() {
    if (array.size() <= 1) {
        throw NoSpanCanBeFoundException();
    }

    std::vector<int> sorted = array;
    std::sort(sorted.begin(), sorted.end());

    int delta = std::abs(*(sorted.end() - 1) - *sorted.begin());
    std::vector<int>::const_iterator it;

    for (it = sorted.begin(); it != sorted.end() - 1; it++) {
        delta = std::abs(*it - *(it + 1)) < delta ? std::abs(*it - *(it + 1)) : delta;
    }

    return delta;
}

int Span::longestSpan() {
    if (array.size() <= 1) {
        throw NoSpanCanBeFoundException();
    }

    std::vector<int> sorted = array;
    std::sort(sorted.begin(), sorted.end());

    return std::abs(*(sorted.end() - 1) - *sorted.begin());
}
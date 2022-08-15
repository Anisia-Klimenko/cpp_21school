//
// Created by Attack Cristina on 15.08.2022.
//

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <ctime>
#include <exception>

class Span {
private:
    unsigned int N;
    std::vector<int> array;
    Span( void );

public:
    Span( unsigned int N );
    Span( const Span& );
    ~Span( void );

    Span& operator=( const Span& );

    std::vector<int> & getArray( void );

    void addNumber( int number );
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end, int number);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    int shortestSpan( void );
    int longestSpan( void );

    class OutOfRangeException : public std::exception {
        virtual const char* what() const throw() {
            return "Out of range!";
        }
    };

    class NoSpanCanBeFoundException : public std::exception {
        virtual const char* what() const throw() {
            return "No span can be found!";
        }
    };
};


#endif //SPAN_H

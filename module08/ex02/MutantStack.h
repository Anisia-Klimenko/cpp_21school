//
// Created by Attack Cristina on 15.08.2022.
//

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack( void ) : std::stack<T>() {};
    MutantStack( const MutantStack& src) : std::stack<T>(src) {};
    ~MutantStack( void ) {};

    MutantStack& operator=( const MutantStack& src ) { std::stack<T>::operator=(src); }


    iterator begin( void ) { return std::stack<T>::c.begin(); }
    const_iterator cbegin( void ) const { return std::stack<T>::c.cbegin(); }
    reverse_iterator rbegin( void ) { return std::stack<T>::c.rbegin(); }
    const_reverse_iterator crbegin( void ) { return std::stack<T>::c.crbegin(); }

    iterator end( void ) { return std::stack<T>::c.end(); }
    const_iterator cend( void ) const { return std::stack<T>::c.cend(); }
    reverse_iterator rend( void ) { return std::stack<T>::c.rend(); }
    const_reverse_iterator crend( void ) { return std::stack<T>::c.crend(); }

};

#endif //MUTANTSTACK_H

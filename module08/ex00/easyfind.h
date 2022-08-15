//
// Created by Attack Cristina on 15.08.2022.
//

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <exception>
#include <algorithm>

class ObjectNotFoundException : public std::exception {
    virtual const char* what() const throw() {
        return "Object not found!";
    }
};

template<typename T>
typename T::iterator easyfind(T& array, int number) {
    typename T::iterator it = find(array.begin(), array.end(), number);
    if (it == array.end()) {
        throw ObjectNotFoundException();
    }

    return it;
}

#endif //EASYFIND_H

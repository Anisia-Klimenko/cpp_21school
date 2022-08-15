//
// Created by Attack Cristina on 14.08.2022.
//

#include <iostream>
#include "iter.h"

template<typename T>
void iter(T* ptr, size_t size, void func(T &)) {
    for (size_t i = 0; i < size; i++) {
        func(ptr[i]);
    }
}

template<typename T>
void perform(T object) {
    std::cout << " -> " << object << std::endl;
}

int main(void) {
    std::cout << std::endl << "----- CHAR -----" << std::endl;
    char arrayOfChars[4] = {'a', 's', 'd', 'f'};
    iter(arrayOfChars, 4, perform);

    std::cout << std::endl << "----- INT -----" << std::endl;
    int arrayOfInts[4] = {1, 2, 3, 4};
    iter(arrayOfInts, 4, perform);

    std::cout << std::endl << "----- FLOAT -----" << std::endl;
    float arrayOfFloats[4] = {1.9f, 2.8f, 3.7f, 4.6f};
    iter(arrayOfFloats, 4, perform);

    std::cout << std::endl;

    return 0;
}
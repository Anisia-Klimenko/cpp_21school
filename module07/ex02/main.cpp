//
// Created by Attack Cristina on 14.08.2022.
//

#include <iostream>
#include "Array.h"

template<typename T>
Array<T>::Array() : arraySize(0), data(new T[0]) {
    std::cout << "Empty array created!" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int arraySize) : arraySize(arraySize), data(new T[arraySize]) {
    for (unsigned int i = 0; i < arraySize; ++i) {
        data[i] = 0;
    }
    std::cout << "Array[" << arraySize << "] created!" << std::endl;
}

template<typename T>
Array<T>::Array(const Array<T> &src) : arraySize(src.arraySize) {
    if (arraySize == 0) {
        data = NULL;
    } else {
        data = new T[arraySize];
        for (unsigned int i = 0; i < arraySize; ++i) {
            data[i] = src.data[i];
        }
    }
    std::cout << "Array[" << arraySize << "] copied!" << std::endl;
}

template<typename T>
Array<T>::~Array() {
    delete[] data;
    data = NULL;
    std::cout << "Array destroyed!" << std::endl;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &src) {
    if (*this != src) {
        if (arraySize > 0) {
            delete[] data;
            data = NULL;
        }

        arraySize = src.arraySize;

        if (arraySize > 0) {
            data = new T[src.arraySize];
            for (unsigned int i = 0; i < arraySize; i++) {
                data[i] = src.data[i];
            }
        }
    }

    return *this;
}

template<typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index >= (int)arraySize) {
        throw Array<T>::IndexOutOfRangeException();
    }

    return data[index];
}

template<typename T>
unsigned int Array<T>::size() const {
    return arraySize;
}

template<typename T>
const char *Array<T>::IndexOutOfRangeException::what() const throw() {
    return "Index out of range!";
}

#define MAX_VAL 750
int main(int, char**)
{
    {
        std::cout << std::endl << "----- CREATE EMPTY ARRAY -----" << std::endl;
        Array<int> emptyArray;
        std::cout << "size: " << emptyArray.size() << std::endl;
        std::cout << std::endl << "----- DESTROY EMPTY ARRAY -----" << std::endl;
    }

    std::cout << std::endl << "----- CREATE ARRAY & MIRROR(int) -----" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        std::cout << std::endl << "----- CREATE ARRAY & COPY -----" << std::endl;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << std::endl << "----- DESTROY ARRAY & COPY -----" << std::endl;
    }

    std::cout << std::endl << "----- COMPARE ARRAY & MIRROR (no errors) -----" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout << std::endl << "----- INDEX OF ARRAY < 0 -----" << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << std::endl << "----- INDEX OF ARRAY > SIZE -----" << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    std::cout << std::endl << "----- DESTROY ARRAY & MIRROR(int) -----" << std::endl;

    delete [] mirror;//
    return 0;
}
//
// Created by Attack Cristina on 14.08.2022.
//

#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base* generate() {
    std::srand(std::time(nullptr));
    switch (std::rand() % 3) {
        case 0:
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
    }
    return NULL;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL) {
        std::cout << "Object of type A" << std::endl;
    } else if (dynamic_cast<B*>(p) != NULL) {
        std::cout << "Object of type B" << std::endl;
    } else if (dynamic_cast<C*>(p) != NULL) {
        std::cout << "Object of type C" << std::endl;
    } else {
        std::cout << "Unknown Base type" << std::endl;
    }
}

void identify(Base& p) {
    try {
        identify(&p);
    } catch (std::exception &e) {
        std::cerr << "Something went wrong" << std::endl;
    }
}

int main(void) {
    Base* base = generate();

    identify(base);
    identify(*base);

    delete base;

    return 0;
}
//
// Created by Attack Cristina on 15.08.2022.
//

#include <iostream>
#include "Span.h"

int main()
{
    {
        std::cout << std::endl << "----- CREATE SPAN[5] -----" << std::endl;
        Span sp = Span(5);

        std::cout << std::endl << "----- ADD NUMBERS -----" << std::endl;
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(sp.getArray().begin() + 3, sp.getArray().end() + 1, 5);

        std::cout << std::endl << "----- SHOW ELEMENTS -----" << std::endl;
        for (std::vector<int>::iterator it = sp.getArray().begin(); it != sp.getArray().end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << std::endl << "----- ADD EXTRA NUMBER -----" << std::endl;
        try {
            sp.addNumber(1);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << std::endl << "----- SHORTEST SPAN -----" << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << std::endl << "----- LONGEST SPAN -----" << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << std::endl << "----- DESTROY SPAN[5] -----" << std::endl;
    }

    {
        std::cout << std::endl << "----- CREATE SPAN[500] -----" << std::endl;
        Span sp = Span(500);

        std::cout << std::endl << "----- ADD NUMBERS -----" << std::endl;
        sp.addNumber(sp.getArray().begin(), sp.getArray().end(), 8);
        sp.addNumber(sp.getArray().begin() + 5, sp.getArray().end(), 5);

        std::cout << std::endl << "----- SHOW ELEMENTS -----" << std::endl;
        for (std::vector<int>::iterator it = sp.getArray().begin(); it != sp.getArray().end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << std::endl << "----- SHORTEST SPAN -----" << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << std::endl << "----- LONGEST SPAN -----" << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << std::endl << "----- DESTROY SPAN[5] -----" << std::endl;
    }

    {
        std::cout << std::endl << "----- CREATE SPAN[50] -----" << std::endl;
        Span sp = Span(50);

        std::cout << std::endl << "----- ADD NUMBERS -----" << std::endl;
        sp.addNumber(sp.getArray().begin(), sp.getArray().end());

        std::cout << std::endl << "----- SHOW ELEMENTS -----" << std::endl;
        for (std::vector<int>::iterator it = sp.getArray().begin(); it != sp.getArray().end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        std::cout << std::endl << "----- SHORTEST SPAN -----" << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << std::endl << "----- LONGEST SPAN -----" << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << std::endl << "----- DESTROY SPAN[5] -----" << std::endl;
    }

    return 0;
}
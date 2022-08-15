//
// Created by Attack Cristina on 15.08.2022.
//

#include <iostream>
#include <list>
#include <vector>
#include "easyfind.h"

int main(void) {
    {
        std::cout << std::endl << "----- LIST -----" << std::endl;

        std::list<int> li;

        for (int nCount=0; nCount < 5; ++nCount) {
            li.push_back(nCount);
            std::cout << nCount << " ";
        }

        std::cout << std::endl;

        for (int i = 3; i < 6; i++) {
            try {
                std::cout << "i: " << i << " -> ";
                std::list<int>::iterator it = easyfind(li, i);
                if (*it == i) {
                    std::cout << "true" << std::endl;
                }
            } catch (std::exception &e) {
                std::cout << e.what() << std::endl;
            }
        }

    }

    {
        std::cout << std::endl << "----- VECTOR -----" << std::endl;

        std::vector<int> li;

        for (int nCount=0; nCount < 5; ++nCount) {
            li.push_back(nCount);
            std::cout << nCount << " ";
        }

        std::cout << std::endl;

        for (int i = 3; i < 6; i++) {
            try {
                std::cout << "i: " << i << " -> ";
                std::vector<int>::iterator it = easyfind(li, i);
                if (*it == i) {
                    std::cout << "true" << std::endl;
                }
            } catch (std::exception &e) {
                std::cout << e.what() << std::endl;
            }
        }

    }

    std::cout << std::endl;

    return 0;
}
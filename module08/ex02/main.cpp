//
// Created by Attack Cristina on 15.08.2022.
//

#include "MutantStack.h"
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    std::cout << std::endl << "----- Mutant Stack created -----" << std::endl;
    std::cout << std::endl << "----- Pushing 2 elements -> 5, 17 -----" << std::endl;

    mstack.push(5);
    mstack.push(17);

    std::cout << std::endl << "----- Top (17) -----" << std::endl;
    std::cout << mstack.top() << std::endl;

    std::cout << std::endl << "----- RM 1 element -----" << std::endl;
    mstack.pop();

    std::cout << std::endl << "----- Size = 1 -----" << std::endl;
    std::cout << mstack.size() << std::endl;

    std::cout << std::endl << "----- Pushing 4 elements -> 3, 5, 737, 0 -----" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << std::endl << "----- Creating begin/end iterators -----" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << std::endl << "----- ++/-- iterator -----" << std::endl;
    ++it;
    --it;

    std::cout << std::endl << "----- Print elements -----" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}

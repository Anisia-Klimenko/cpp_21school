//
// Created by Attack Cristina on 10.08.2022.
//

#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"

int main()
{
    std::cout << std::endl << "----- Constructors -----" << std::endl << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    std::cout << std::endl << "----- Use Materia -----" << std::endl << std::endl;

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << std::endl << "----- Destructors -----" << std::endl << std::endl;

    delete bob;
    delete me;
    delete src;

    return 0;
}
//
// Created by Attack Cristina on 07.08.2022.
//

#include "Harl.h"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-" <<
                 "special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" <<
                 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" <<
                 "years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::message() {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int getLevel(std::string level) {
    std::string complains[4] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
    };

    for (int i = 0; i < 4; i++) {
        if (!level.compare(complains[i])) {
            return i;
        }
    }

    return -1;
}

void Harl::complain(std::string level) {
    int currentLevel = getLevel(level);

    void (Harl::*pointers[])() = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
    };

    switch (currentLevel) {
        case 0:
            (this->*pointers[0])();
        case 1:
            (this->*pointers[1])();
        case 2:
            (this->*pointers[2])();
        case 3:
            (this->*pointers[3])();
            break;
        default:
                message();
    }
}

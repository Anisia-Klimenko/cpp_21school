//
// Created by Attack Cristina on 10.08.2022.
//

#include "Brain.h"

Brain::Brain() {
    for (int i = 0; i < 100; i++) {
        ideas[i] = "default animal thought";
    }
    std::cout << "Default animal brain created" << std::endl;
}

Brain::Brain(const Brain &strangerBrain) {
    *this = strangerBrain;
    std::cout << "Brain copied" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &src) {
    for (int i = 0; i < 100; i++) {
        ideas[i] = src.getIdea(i);
    }
    return *this;
}

std::string Brain::getIdea( int i ) const {
    return ideas[i];
}
//
// Created by Attack Cristina on 13.08.2022.
//

#include "Converter.h"

Converter::Converter() : input(""), result(0) {}

Converter::Converter(std::string input) : input(input), result(0) {}

Converter::Converter(const Converter &src) : input(src.input), result(0) {}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &src) {
    if (this != &src) {
        input = src.input;
        result = src.result;
    }

    return *this;
}

bool Converter::parseString() {
    try {
        result = std::stod(input);
    } catch (std::exception &e) {
        return false;
    }

    return true;
}

std::string Converter::toChar() {
    if (result != result) {
        return "imposible";
    }

    if (result < (int)std::numeric_limits<char>::min() || result > (int)std::numeric_limits<char>::max()) {
        return "imposible";
    } else if (!isprint(static_cast<char>(result))) {
        return "non displayable";
    } else {
        std::string tmp = "'";
        tmp += static_cast<char>(result);
        return tmp + "'";
    }
}

std::string Converter::toInt() {
    if (result != result) {
        return "imposible";
    }

    if (result < std::numeric_limits<int>::min() || result > std::numeric_limits<int>::max()) {
        return "overflow";
    } else {
        return std::to_string(static_cast<int>(result));
    }
}

std::string Converter::toFloat() {
    if (result == std::numeric_limits<float>::infinity() || result == -std::numeric_limits<float>::infinity()) {
        std::stringstream sstream;
        sstream << result;
        
        return sstream.str() + "f";
    }
    if (result < std::numeric_limits<float>::lowest() || result > std::numeric_limits<float>::max()) {
        return "overflow";
    }

    std::stringstream sstream;
    sstream << result;

    if (result - static_cast<int>(result) == 0) {
        return sstream.str() + ".0f";
    } else {
        return sstream.str() + "f";
    }
}

std::string Converter::toDouble() {
    std::stringstream sstream;
    sstream << result;

    if (result - static_cast<int>(result) == 0) {
        return sstream.str() + ".0";
    } else {
        return sstream.str();
    }
}

void Converter::showResults() {
    std::cout << "char: " << toChar() << std::endl
              << "int: " << toInt() << std::endl
              << "float: " << toFloat() << std::endl
              << "double: " << toDouble() << std::endl;
}
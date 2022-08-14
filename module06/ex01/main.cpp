//
// Created by Attack Cristina on 14.08.2022.
//

#include <iostream>

struct Data {
    std::string type;
    int length;
    char level;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main(void) {
    Data data = {"testType", 7, 'c'};
    std::cout << "TO BE:\t\t" << data.type << " " << data.length << " " << data.level << &data << std::endl;

    uintptr_t ptr = serialize(&data);
    std::cout << "UINT POINTER:\t" << ptr << std::endl;

    Data *newData = deserialize(ptr);
    std::cout << "AS IS:\t\t" << newData->type << " " << newData->length << " " << newData->level << " " << newData << std::endl;
    return 0;
}
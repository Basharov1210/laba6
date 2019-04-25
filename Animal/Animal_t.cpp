#include "Animal_t.h"

Animal_t::Animal_t() {
    this->size = 0;
    this->type = "XxX";
    this->name = "XxX";
}

Animal_t::Animal_t(string name, string type, int size) {
    this->size = size;
    this->name = name;
    this->type = type;
}

void Animal_t::move() {
    cout << "It can moved" << endl;
}

void Animal_t::makeChild() {
    cout << "It got chile" << endl;
}
#include "Cat.h"

Cat::Cat() : Animal_t() {
    this->long_tale = 0;
    this->skin_type = "short";
}

Cat::Cat(string name, string type, int size, string skin_type, int long_tale)
    :Animal_t(name , type , size){
    this->skin_type = skin_type;
    this->long_tale = long_tale;
}

void Cat::meow() {
    cout << "Meow meow meow!" << endl;
}
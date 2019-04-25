#include "Dog.h"

Dog::Dog() : Animal_t(){
    this->color = "Black";
    this->long_tale = 0;
}

Dog::Dog(string name, string type, int size, int long_tale, string color)
    : Animal_t(name , type , size){
    this->long_tale = long_tale;
    this->color = color;
}

void Dog::bark() {
    cout << "Wow wow wow!" << endl;
}
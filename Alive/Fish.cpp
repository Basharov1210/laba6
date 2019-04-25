#include "Fish.h"

Fish::Fish() : Alive(){
    this->length = 0;
    this->type = "sharp";
}

Fish::Fish(int age, bool isAlive, string type, int length) : Alive (age , isAlive) {
    this->length = length;
    this->type = type;
}

void Fish::swim() {
    cout << "I can swim!" << endl;
}

void Fish::getBigger() {
    this->length++;
}
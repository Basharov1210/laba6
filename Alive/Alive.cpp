#include "Alive.h"

Alive::Alive() {
    this->age = 1;
    this->isAlive = true;
}

Alive::Alive(int age, bool isAlive) {
    this->age = age;
    this->isAlive = isAlive;
}

void Alive::move() {
    cout << "I can move!" << endl;
}

void Alive::grow() {
    this->age++;
}
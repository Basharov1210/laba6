#include "Bird.h"

Bird::Bird():Alive() {
    this->name = "";
    this->wingspan = 0;
}

Bird::Bird(int age, bool isAlive, string name, int wingspan): Alive(age , isAlive) {
    this->name = name ;
    this->wingspan = wingspan;
}

void Bird::fly() {
    cout << "I can fly" << endl;
}

void Bird::cutWings() {
    this->wingspan--;
}
#include "Animal.h"

Animal::Animal() : Alive(){
    this->animal_k = "XxX";
    this->type = "XxX";
    this->size = "XxX";
}

Animal::Animal(int age, bool isAlive, string type, string animal_k, string size) : Alive(age , isAlive) {
    this->size = size;
    this->type = type;
    this->animal_k = animal_k;
}

void Animal::showAnimal() {
    cout << this->animal_k <<" " << this->type << " " << this->size << endl;
}

void Animal::changeType(string type) {
    this->type = type;
}
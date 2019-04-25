#ifndef LAB6_ANIMAL_H
#define LAB6_ANIMAL_H

#include "Alive.h"
class Animal : public Alive
{
private:
    string type;
    string animal_k;
    string size;
public:
    Animal();
    Animal(int age, bool isAlive , string type , string animal_k  ,string size);
    void showAnimal();
    void changeType(string type);
};
#endif 
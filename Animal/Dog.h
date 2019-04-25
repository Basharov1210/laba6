#ifndef LAB6_DOG_H
#define LAB6_DOG_H

#include "Animal_t.h"

class Dog : public Animal_t
{
private:
    int long_tale;
    string color;
public:
    Dog();
    Dog(string name, string type, int size,int long_tale , string color);
    void bark();
};
#endif
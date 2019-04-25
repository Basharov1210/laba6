#ifndef LAB6_FISH_H
#define LAB6_FISH_H

#include "Alive.h"

class Fish : public Alive
{
private:
    string type;
    int length;
public:
    Fish();
    Fish(int age, bool isAlive , string type , int length);
    void swim();
    void getBigger();
};

#endif
#ifndef LAB6_ANIMAL_H
#define LAB6_ANIMAL_H

#include <iostream>

class Animal_t
{
protected:
    string name;
    string type;
    int size;
public:
    Animal_t();
    Animal_t(string name , string type , int size);
    void move();
    void makeChild();
};

#endif
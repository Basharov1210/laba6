#ifndef LAB6_ALIVE_H
#define LAB6_ALIVE_H

#include <iostream>
class Alive
{
    protected:
        int age;
        bool isAlive;
    public:
        Alive();
        Alive(int age , bool isAlive);
        void grow();
        void move();
};

#endif
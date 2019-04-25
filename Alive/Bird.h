#ifndef LAB6_BIRD_H
#define LAB6_BIRD_H

#include "Alive.h"

class Bird : public Alive
{
    private:
        string name;
        int wingspan;
    public:
        Bird();
        Bird(int age, bool isAlive, string name , int wingspan);
        void fly();
        void cutWings();
};
#endif
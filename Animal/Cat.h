#ifndef LAB6_CAT_H
#define LAB6_CAT_H

#include "Animal_t.h"

class Cat : public Animal_t
{
private:
    string skin_type;
    int long_tale;
public:
    Cat();
    Cat(string name, string type, int size , string skin_type , int long_tale);
    void meow();
};
#endif
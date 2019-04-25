#pragma once
#ifndef HEADMAN_H
#define HEADMAN_H

#include "student.h"
class Headman : public Student
{
private:
    bool hasJournal;
    int rating;
public:
    Headman();
    Headman(string name, string surname, int age, int course, double avg_grade, bool isOut, bool hasJournal , int rating);
    void move();
    void out();


};
#endi
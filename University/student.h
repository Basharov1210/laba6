#ifndef LAB6_STUDENT_H
#define LAB6_STUDENT_H

#include <iostream>


class Student{
protected:
    string surname;
    int age;
    int course;
    double avg_grade;
    bool isOut;
    string name;
public:

    Student();
    Student(string name , string surname , int age , int course , double avg_grade , bool isOut);
    ~Student();

    const string &getSurname() const;
    void Surname(const string &surname);
    int getCourse() const;
    void setCourse(int course);
    double getAvg_grade() const;
    void setAvg_grade(double avg_grade);
    bool isIsOut() const;
    void setIsOut(bool isOut);

    void printStudent();
    void getOut();


};

#endif
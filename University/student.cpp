#include "student.h"

Student::Student() {
    this->name = "";
    this->surname = "";
    this->age = 18;
    this->course = 1;
    this->avg_grade = 0;
    this->isOut = false;
}

Student::Student(string name, string surname, int age, int course, double avg_grade, bool isOut) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->avg_grade = avg_grade;
    this->course = course;
    this->isOut = false;
}

Student::~Student() = default;

const string &Student::getSurname() const {
    return surname;
}

void Student::setSurname(const string &surname) {
    Student::surname = surname;
}

int Student::getCourse() const {
    return course;
}

void Student::setCourse(int course) {
    Student::course = course;
}

double Student::getAvg_grade() const {
    return avg_grade;
}

void Student::setAvg_grade(double avg_grade) {
    Student::avg_grade = avg_grade;
}

bool Student::isIsOut() const {
    return isOut;
}

void Student::setIsOut(bool isOut) {
    Student::isOut = isOut;
}

void Student::printStudent() {
    cout << "Name - " << this->name << endl;
    cout << "Surname - " << this->surname<<endl;
    cout << "Age - " << this->age<<endl;
    cout << "Average grad - " << this->avg_grade<<endl;
    if(!this->isOut) cout<<"On " << this->course << " course" << endl;
    else cout << "Fired"<<endl ;
}
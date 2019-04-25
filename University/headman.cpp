#include "headman.h"

Headman::Headman(string name, string surname, int age, int course, double avg_grade, bool isOut,bool hasJournal, int rating)
    :Student(name , surname , age , course , avg_grade , isOut) {
    this->hasJournal = hasJournal;
    this->rating = rating ;

}

void Headman::move() {
    cout << "I have come" << endl;
}

void Headman::out() {
    cout << "I went out" << endl;
}
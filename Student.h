//
// Created by ZPringle on 11/4/2021.
//
#ifndef UNTITLED1_STUDENT_H
#define UNTITLED1_STUDENT_H
#include <string>
using namespace std;

#include "Person.h"

class Student:public Person {
public:
    Student():studentID(0){}//default that sets student ID to 0
    Student(int num):studentID(num){}//sets ID of the student when constructor is called
    void setStudentID(int idNum){studentID=idNum;}//sets the student ID
    int getStudentID(){return(studentID);}//returns the student ID
protected:
    int studentID;
};


#endif //UNTITLED1_STUDENT_H

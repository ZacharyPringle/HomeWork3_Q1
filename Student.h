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
    Student():studentID(0){}
    Student(int num):studentID(num){}
    void setStudentID(int idNum){studentID=idNum;}
    int getStudentID(){return(studentID);}
protected:
    int studentID;
};


#endif //UNTITLED1_STUDENT_H

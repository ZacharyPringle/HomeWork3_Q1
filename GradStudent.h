//
// Created by ZPringle on 11/4/2021.
//
using namespace std;
#ifndef UNTITLED1_GRADSTUDENT_H
#define UNTITLED1_GRADSTUDENT_H
#include <string>

#include "Student.h"


class GradStudent: public Student{
public:
    GradStudent():major(""){}//default and sets the major to nothing in the string
    GradStudent(string maj): major(maj){}//constructor that can be called and sets the major
    string getMajor(){return major;}//returns major
    void setMajor(string majorName){major=majorName;}//sets the major from a string

protected:
    string major;
};


#endif //UNTITLED1_GRADSTUDENT_H

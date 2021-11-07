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
    GradStudent():major(""){}
    GradStudent(string maj): major(maj){}
    string getMajor(){return major;}
    void setMajor(string majorName){major=majorName;}

protected:
    string major;
};


#endif //UNTITLED1_GRADSTUDENT_H

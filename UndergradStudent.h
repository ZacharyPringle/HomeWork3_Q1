//
// Created by ZPringle on 11/4/2021.
//

#ifndef UNTITLED1_UNDERGRADSTUDENT_H
#define UNTITLED1_UNDERGRADSTUDENT_H
#include <string>

#include "Student.h"

class UndergradStudent:public Student{
public:
string getMajor(){return major;}
void setMajor(string majorName){major=majorName;}
    string getMinor(){return minor;}
    void setMinor(string minorName){minor=minorName;}
protected:
string major;
string minor;
};



#endif //UNTITLED1_UNDERGRADSTUDENT_H

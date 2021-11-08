//
// Created by ZPringle on 11/4/2021.
//
using namespace std;
#ifndef UNTITLED1_UNDERGRADSTUDENT_H
#define UNTITLED1_UNDERGRADSTUDENT_H
#include <string>

#include "Student.h"

class UndergradStudent:public Student{
public:
    UndergradStudent():major(""), minor(""){}//default setting the major and the minor to nothing in the string
    UndergradStudent(string maj, string min):major(maj), minor(min){}//constructor that takes two strings to set major and minor when called
    string getMajor(){return major;}//returns the major
    void setMajor(string majorName){major=majorName;}//sets the major with a string value
    string getMinor(){return minor;}//returns minor
    void setMinor(string minorName){minor=minorName;}//sets minor with a string value
protected:
string major;
string minor;
};



#endif //UNTITLED1_UNDERGRADSTUDENT_H

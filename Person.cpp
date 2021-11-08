#include "Person.h"
#include <sstream>
using namespace std;
//default
Person::Person()
{
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
}
//constructor that sets name and birthday when called
Person::Person(string first, string last, int day, int month, int year){
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
}
//returns first and last name
string Person::getName(){
    return Fname + " " + Lname;
}
//returns the birth dat, month, and year
string Person::getBirthdate(){
    ostringstream bday;
    bday << birthDay << "/" << birthMonth << "/" << birthYear;
    return bday.str();
}

void Person::setAll(string first, string last, int day, int month, int year) {
    Fname=first;
    Lname=last;
    birthDay=day;
    birthMonth=month;
    birthYear=year;
}
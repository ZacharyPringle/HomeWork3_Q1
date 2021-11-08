#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
public:
    Person();//default
    Person(string first, string last, int month, int day, int year);//constructor to set names and birthdates
    void setFirst(string first){Fname=first;}//sets first name
    void setLast(string last){Lname=last;}//sets last name
    void setDay(int day){birthDay=day;}//sets birth day
    void setMonth(int month){birthMonth=month;}//sets birth month
    void setYear(int year) {birthYear=year;}//sets birth year
    void setAll(string first, string last, int day, int month, int year);//can set all names and birthday information here
    string getName();//return first and last name
    string getBirthdate();//returns birth day, month, and year
protected:
    string Fname;
    string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;
protected:
    /*You may move private members to protected if needed*/
};

#endif // PERSON_H

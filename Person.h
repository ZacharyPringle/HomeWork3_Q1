#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string first, string last, int month, int day, int year);
    void setFirst(string first){Fname=first;}
    void setLast(string last){Lname=last;}
    void setDay(int day){birthDay=day;}
    void setMonth(int month){birthMonth=month;}
    void setYear(int year) {birthYear=year;}
    void setAll(string first, string last, int day, int month, int year);
    string getName();
    string getBirthdate();
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

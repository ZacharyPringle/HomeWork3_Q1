#include <iostream>
#include <string>
#include "UndergradStudent.h"
#include "GradStudent.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    Student s1(1);
    GradStudent g1("Math");
    UndergradStudent u1("Science", "Math");
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;
    s1.setAll("Joey", "Test", 15, 5, 1998);
    cout << s1.getName() << " born on: " << s1.getBirthdate() << " student number: " << s1.getStudentID() << endl;
    g1.setAll("Jimmy", "John", 23, 11, 2004);
    g1.setStudentID(2);
    cout << g1.getName() << " born on: " << g1.getBirthdate() << " student number: " << g1.getStudentID() << " major: " << g1.getMajor() << endl;
    u1.setAll("Joe", "Shoe", 12, 12, 1999);
    u1.setStudentID(3);
    cout << u1.getName() << " born on: " << u1.getBirthdate() << " student number: " << u1.getStudentID() << " major: " << u1.getMajor() << " minor: " << u1.getMinor() << endl;




    return 0;
}

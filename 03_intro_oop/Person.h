#ifndef Person_h
#define Person_h
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string      firstName;
    string      lastName;
    int         age;
public:
    Person(string last, string first, int a);
    void             displayPerson();
    string          getLast();
};

#endif /* Person_h */

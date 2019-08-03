#include "Person.h"

Person::Person(string last, string first, int a)
{
    lastName = last;
    firstName = first;
    age = a;
}

void Person::displayPerson()
{
    cout << "   Last name: " << lastName;
    cout << ", First name: " << firstName;
    cout << ", Age: " << age << endl;
}

string Person::getLast()
{ return lastName; }

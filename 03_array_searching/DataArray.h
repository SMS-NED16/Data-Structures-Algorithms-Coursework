#ifndef DataArray_h
#define DataArray_h
#include "Person.h"
#include <vector>

class ClassDataArray
{
private:
    vector<Person*> v;
    int             nElems;
public:
    ClassDataArray(int max);
    ~ClassDataArray();
    Person* find(string searchName);
    void insert(string last, string first, int age);
    bool remove(string searchName);
    void displayA();
};
#endif /* DataArray_h */
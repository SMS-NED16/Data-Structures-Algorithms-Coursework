#include "DataArray.h"
ClassDataArray::ClassDataArray(int max) : nElems(0)
{ v.resize(max); }


ClassDataArray::~ClassDataArray()
{
    for (int j = 0; j < nElems; j++)
        delete v[j];
}

Person* ClassDataArray::find(string searchName)
{
    int j;
    for (j = 0; j < nElems; j++)
        if (v[j]->getLast() == searchName)
            break;
    if (j == nElems)
        return NULL;
    else
        return v[j];
}

void ClassDataArray::insert(string last, string first, int age)
{
    v[nElems] = new Person(last, first, age);
    nElems++;
}

bool ClassDataArray::remove(string searchName)
{
    int j;
    for (j = 0; j < nElems; j++)
        if (v[j]->getLast() == searchName)
            break;
    if (j == nElems)
        return false;
    else
    {
        delete v[j];
        for (int k = j; k < nElems; k++)
            v[k] = v[k+1];
        nElems--;
        return true;
    }//end else
}//end remove

void ClassDataArray::displayA()
{
    for (int j = 0; j < nElems; j++)
        v[j]->displayPerson();
}   //end displayA();Array


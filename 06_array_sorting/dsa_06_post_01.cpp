//objectSort.cpp
//demonstrates sorting objects (uses insertion sort)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
////////////////////////////////////////////////////////////////
class Person
{
private:
    string lastName;
    string firstName;
    int age;
public:
    //--------------------------------------------------------------
    Person(string last, string first, int a) :    //constructor
    lastName(last), firstName(first), age(a)
    {
        
    }
    //--------------------------------------------------------------
    void displayPerson()
    {
        cout << "   Last name: " << lastName;
        cout << ", First name: " << firstName;
        cout << ", Age: " << age << endl;
    }
    //--------------------------------------------------------------
    string getLast()                  //get last name
    {
        return lastName;
    }
};  //end class Person
////////////////////////////////////////////////////////////////
class ArrayInOb
{
private:
    vector<Person*> v;             //vect of ptrs to Persons
    int nElems;                    //number of data items
public:
    //--------------------------------------------------------------
    ArrayInOb(int max) : nElems(0)    //constructor
    {
        v.resize(max);                 //size the vector
    }
    //--------------------------------------------------------------
    //put person into array
    void insert(string last, string first, int age)
    {
        v[nElems] = new Person(last, first, age);
        nElems++;                      //increment size
    }
    //--------------------------------------------------------------
    void display()                    //displays array contents
    {
        for(int j=0; j<nElems; j++)    //for each element,
            v[j]->displayPerson();       //display it
    }
    //--------------------------------------------------------------
    void insertionSort()
    {
        int in, out;
        
        for(out=1; out<nElems; out++)
        {
            Person* temp = v[out];      //out is dividing line
            in = out;                   //start shifting at out
            //until smaller one found,
            while( in>0 && v[in-1]->getLast() > temp->getLast() )
            {
                v[in] = v[in-1];         //shift item to the right
                --in;                    //go left one position
            }
            v[in] = temp;               //insert marked item
        }  //end for
    }  //end insertionSort()
    //--------------------------------------------------------------
};  //end class ArrayInOb
////////////////////////////////////////////////////////////////
int main()
{
    int maxSize = 100;             //array size
    ArrayInOb arr(maxSize);        //create array
    
    arr.insert("Evans", "Patty", 24);
    arr.insert("Smith", "Doc", 59);
    arr.insert("Smith", "Lorraine", 37);
    arr.insert("Smith", "Paul", 37);
    arr.insert("Yee", "Tom", 43);
    arr.insert("Hashimoto", "Sato", 21);
    arr.insert("Stimson", "Henry", 29);
    arr.insert("Velasquez", "Jose", 72);
    arr.insert("Vang", "Minh", 22);
    arr.insert("Creswell", "Lucinda", 18);
    cout << "Before sorting:" << endl;
    arr.display();                 //display items
    
    arr.insertionSort();           //insertion-sort them
    
    cout << "After sorting:" << endl;
    arr.display();                 //display them again
    return 0;
}  //end main()

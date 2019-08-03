#include <iostream>
using namespace std;

void printArray(int theArray[], int arraySize);

int main()
{
    //APPLICATION 1 - Extending static arrays
    int maxSize = 10;          //initially max size is to be 10
    int staticArray[maxSize];  //reserve space in memory for 10 ints
    
    for (int i = 0; i < maxSize; i++)
        staticArray[i] = i + 1;    //initialise theArray
    
    cout << "Initially, our static array is as follows" << endl;
    printArray(staticArray, maxSize);  //echo theArray
    
    cout << "\nWant to add another element to the array." << endl;
    cout << "Can't do this with staticArray" << endl;
    cout << "staticArray has space for only 10 ints." << endl;
    
    //create a pointer to a new int array of size 11
    int* dynamicArrayPtr = new int[maxSize + 1];
    //copy over existing elements to new array
    for (int i = 0; i < maxSize; i++)
        *(dynamicArrayPtr + i) = staticArray[i];
    
    //now max size of an array in our programme - 11
    maxSize++;
    
    //adding element to the new array
    dynamicArrayPtr[maxSize - 1] = 11;
    
    //echoing dynamicArray
    cout << "\nThe dynamic array is now:\n";
    printArray(dynamicArrayPtr, maxSize);
    
    //deleting dynamicArray
    delete []dynamicArrayPtr;   //return memory to freestore
    
    
    //APPLICATION 2 - Using dynamic arrays only
    cout << "\nCreating new dynamic array of size specified by user."   << endl;
    cout << "How many elements would you like in your array?" << endl;
    
    int newArraySize;        //will store user entered size of array
    int* newArrayPtr = NULL; //will be assigned to a new memory block
    
    cin >> newArraySize;        //user enters size
    if (newArraySize > 0)       //if size positive integer
        newArrayPtr = new int[newArraySize];
    //create dynamic array, assign to newArrayPtr
    
    //initialise dynamic array to be even numbers
    for (int i = 0; i < newArraySize; i++)
        *(newArrayPtr + i) = 2*i;
    
    //output dynamic array
    cout << "\nHere's your array." << endl;
    printArray(newArrayPtr, newArraySize);
    
    //deleting dynamic array
    delete[] newArrayPtr;       //return memory to freestore
    
    cout << endl;
    return 0;
}//end main

void printArray(int theArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        cout << theArray[i] << " ";
    cout << endl;
}
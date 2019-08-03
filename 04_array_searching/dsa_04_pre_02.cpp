#include <iostream>
using namespace std;

template <typename T>
void printArray(T* myArray, int arraySize);

template <typename T>
void bubbleSort(T* myArray, int arraySize);

template <typename T>
void test(T* myArray, int arraySize);

//MAIN
int main()
{
    //CREATING THREE DIFFERENT TYPES OF ARRAYS
    int     intArray[] = {1, 10, 8, 7, 14, 16, 2, 5, 4, 9};
    char    charArray[] = {'a', 'l', 'g', 'o', 'r', 'i', 't', 'h', 'm', 's'};
    double  doubleArray[] = {99.8, 1.0, -2.39, 4.555, 1245.2, 88.9, 1.11, 2.8};
    
    test(intArray, sizeof(intArray)/sizeof(intArray[0]));
    test(doubleArray, sizeof(doubleArray)/sizeof(doubleArray[0]));
    test(charArray, sizeof(charArray)/sizeof(charArray[0]));

    cout << "END OF PROGRAMME" << endl;
    return 0;
}

//FUNCTION TEMPLATE DEFINITIONS
template <typename T>
void printArray(T* myArray, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        cout << myArray[i] << " ";
    cout << endl;
}//end printArray

template <typename T>
void bubbleSort(T* myArray, int arraySize)
{
    int i, j;
    for (i = 0; i < arraySize - 1; i++)
        for (j = 0; j < arraySize - i - 1; j++)
            if (myArray[j] > myArray[j + 1])
            {
                T temp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j + 1] = temp;
            }//end swap
               //end inner for loop
    //end outer for loop
}//end bubbleSort


template <typename T>
void test(T* myArray, int arraySize)
{
    cout << "Before sorting, array is: " << endl;
    printArray(myArray, arraySize);
    cout << "After sorting, array is: " << endl;
    bubbleSort(myArray, arraySize);
    printArray(myArray, arraySize);
    cout << endl << endl;
}//end test

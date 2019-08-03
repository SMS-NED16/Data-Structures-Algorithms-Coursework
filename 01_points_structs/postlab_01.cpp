#include <iostream>
using namespace std;

//FUNCTION PROTOTYPES
void bubbleSort(int arr[], int size, bool (*compare)(int a, int b));
void swap(int *a, int *b);          //same as lab exercise
bool ascending(int a, int b);       //transmitted as pointer
bool descending(int a, int b);      //transmitted as pointer

int main()
{
    const int SIZE = 10;
    int num[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    
    //Function call with ascending function sent as pointer
    bubbleSort(num, SIZE, ascending);
    
    //printing the sorted ascending array
    cout << "\nAscending sort:";
    for (int index = 0; index < SIZE; index++)
        cout << endl << "Element " << index  << " = " << num[index];
    
    //Function call with descending function sent as pointer
    bubbleSort(num, SIZE, descending);
    
    //Printing the sorted descending array
    cout << "\nDescending sort:";
    for (int index = 0; index < SIZE; index++)
        cout << endl << "Element " << index << " = " << num[index];
    cout << endl;
    return 0;
}   //end main()

//FUNCTION DEFINITIONS
void bubbleSort(int arr[], int SIZE, bool (*compare)(int a, int b))
{
    for (int i = 0; i < SIZE; i++){
        for (int j = i + 1; j < SIZE; j++) 
            if ((*compare)(arr[i], arr[j])) 
                swap(&arr[i], &arr[j]);
}


void swap(int *a, int *b)
{
    int temp = *a;      //store value pointed to by a
    *a = *b;            //assign value stored by b to a
    *b = temp;          //assign a's old value to b
}   //end swap

bool ascending(int a, int b)
{
    return a > b;
}   //end ascending

bool descending(int a, int b)
{
    return a < b;
}   //end descending

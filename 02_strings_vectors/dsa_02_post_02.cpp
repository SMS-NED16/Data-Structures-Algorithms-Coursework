#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printArray(string array[], int arraySize);

int main()
{
    string courses[] = {"MT-226 Multivariable Calculus",
        "MT-272 Linear Algebra and Analytical Geometry",
        "EL-240 Electronic Devices and Circuits",
        "HS-214 Academic Writing",
        "HS-205 Islamic Studies",
        "EE-264 Data Structures and Algorithms",
        "NED-101 Avoiding Security Guards with God Complexes"
    };
    int SIZE = 7;   //7 courses
    
    cout << "Before sorting, array of SE courses is: " << endl;
    printArray(courses, SIZE);

    sort(courses, courses + SIZE);
    cout << "\nAfter sorting, array of SE courses is: " << endl;
    printArray(courses, SIZE);
    
    cout << "END OF PROGRAMME" << endl;
    return 0;
}


void printArray(string array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
        cout << array[i] << endl;
    cout << endl;
}
#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& theVector)
{
    for (int i = 0; i < theVector.size(); i++)
        cout << theVector[i] << " ";
    cout << endl;
}
int main()
{
    //METHOD 1: Empty vector with capacity 0
    vector<int> firstVector;
    cout << "firstVector: "; printVector(firstVector);
    
    //METHOD 2: Initialisation list 1
    vector<int> secondVector {2, 3};
    cout << "secondVector: "; printVector(secondVector);
    
    //METHOD 3: Initialistation list 2
    vector<int> thirdVector = {4, 5, 6};
    cout << "thirdVector: "; printVector(thirdVector);
    
    //METHOD 4: Uninitialised with custom capacity
    vector<int> fourthVector(3);
    cout << "fourthVector: "; printVector(fourthVector);
    
    //METHOD 5: With arrays
    int firstArray[] = {10, 11, 12, 13};
    vector<int> fifthVector {firstArray,
        firstArray + sizeof(firstArray) / sizeof(firstArray[0])};
    cout << "fifthVector: "; printVector(fifthVector);
    
}//end main

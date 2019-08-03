#include <iostream>
using namespace std;

//FUNCTION PROTOTYPES
void printArray(int* myArray, int nElems);
int binarySearch(int* myArray, int arraySize, int searchKey);
int interpolationSearch(int* myArray, int arraySize, int searchKey);


//MAIN
int main()
{
    cout << "This programme demonstrates 
				interpolation search." << endl;
    int intArray[] = {10, 12, 13, 16, 18, 19, 20,
                      21, 22, 23, 24, 33, 35, 42, 47};
    int nElems = sizeof(intArray)/sizeof(intArray[0]);
    int value = 18;     //value to search for
    
    
    //ECHOING ARRAY
    cout << "The array being searched is as follows" << endl;
    printArray(intArray, nElems);
    
    
    //BINARY SEARCH
    cout << "\n\nPerforming binary search for " 
			<< value << "." << endl;
    int indexOfValue = binarySearch(intArray, nElems, value);
    if (indexOfValue != nElems)
        cout << value << " found at index " << indexOfValue << endl;
    else
        cout << value << " not found in array." << endl;
        //INTERPOLATION SEARCH
    cout << "\n\nPerforming interpolation search for " << value << endl;
    indexOfValue = interpolationSearch(intArray, nElems, value);
    if (indexOfValue != -1)
        cout << value << " found at index " << indexOfValue << "." << endl;
    else
        cout << value << " not found in array." << endl;
    
    cout << "\nEND OF PROGRAMME" << endl;
    return 0;
}//end main


//FUNCTION DEFINITIONS
void printArray(int* myArray, int nElems)
{
    for (int i = 0; i < nElems; i++)
    {
        cout << myArray[i] << " ";
        if ((i + 1)% 8 == 0)
            cout << endl;
    }
    cout << endl;
}//end printArray


int binarySearch(int* myArray, int arraySize, int searchKey)
{
    int lowerBound = 0;
    int upperBound = arraySize - 1;
    int currentIndex;
    int currentIteration = 0;
    
    while (true)
    {
        cout << "Binary search iteration: " << ++currentIteration << endl;
        
        currentIndex = (lowerBound + upperBound)/2;
        if (myArray[currentIndex] == searchKey)
            return currentIndex;
        else if (lowerBound > upperBound)
            return arraySize;
        else
        {
            if (myArray[currentIndex] < searchKey)
                lowerBound = currentIndex + 1;
            else
                upperBound = currentIndex - 1;
        }//end bound modification else block
    }//end while loop
}//end binarySearch()


int interpolationSearch(int* myArray, int arraySize, int searchKey)
{
    int start = 0;              //first index of array being searched
    int end = arraySize - 1;    //last index of array being searched
    int currentIndex;           //index being examined by loop
    int searchIteration = 0;    //track how many iterations it takes to find element
    
    while (start < end && searchKey >= myArray[start] && searchKey <= myArray[end])
    {
        cout << "Interpolation search iteration: " << ++searchIteration << endl;
        currentIndex =
        start + ((double)(end - start)/(myArray[end] - myArray[start])) * (searchKey - myArray[start]);
        
        //if element found at currentIndex, return this index
        if (myArray[currentIndex] == searchKey)
            return currentIndex;
        //end found if block
        
        //if element not found, update subarray indexes
        if (myArray[currentIndex] < searchKey)
            start = currentIndex + 1;
        else
            end = currentIndex - 1;
    }//end while loop
    return -1;      //exits while loop if element not found -> return -1 i.e. invalid index
}//end interpolationSearch()

int interpolationSearch(int* myArray, int arraySize, int searchKey)
{
    int start = 0;              //first index of array being searched
    int end = arraySize - 1;    //last index of array being searched
    int currentIndex;           //index being examined by loop
    int searchIteration = 0;    //track how many iterations it takes to find element
    
    while (start < end && searchKey >= myArray[start] 
            && searchKey <= myArray[end])
    {
        cout << "Interpolation search iteration: " 
                << ++searchIteration << endl;
        currentIndex =
        start + ((double)(end - start)/(myArray[end] - myArray[start])) * (searchKey - myArray[start]);
        
        //if element found at currentIndex, return this index
        if (myArray[currentIndex] == searchKey)
            return currentIndex;
        
        //if element not found, update subarray indexes
        if (myArray[currentIndex] < searchKey)
            start = currentIndex + 1;
        else
            end = currentIndex - 1;
    }//end while loop
    return -1; //exits while loop if element not found -> return -1
}//end interpolationSearch()
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct employee
{
    string  firstName;
    string  lastName;
    int     age;
    int     serviceInMonths;
    float   currentSalary;
    char    annualPerformance;      //a grade between 'a' and 'f'
};


void bubbleSort(employee myArray[], int arraySize);
void getEmployeeData(employee myArray[], int arraySize);
void printDatabase(employee myArray[], int arraySize);

int main()
{
    const int TOTAL_EMPLOYEES = 10;
    employee employeeArray[TOTAL_EMPLOYEES];
    
    getEmployeeData(employeeArray, TOTAL_EMPLOYEES);
    cout << "Employee database before sorting" << endl;
    printDatabase(employeeArray, TOTAL_EMPLOYEES);
    
    cout << "Sorting employee database" << endl;
    bubbleSort(employeeArray, TOTAL_EMPLOYEES);
    
    cout << "Employee database after sorting" << endl;
    printDatabase(employeeArray, TOTAL_EMPLOYEES);
    
    cout << "END OF PROGRAMME" << endl;
    return 0;
}


void bubbleSort(employee myArray[], int arraySize)
{
    int i, j;
    for (i = 0; i < arraySize - 1; i++)
        for (j = 0; j < arraySize - i - 1; j++)
            if (myArray[j].annualPerformance > 
					myArray[j + 1].annualPerformance)
            {
                employee temp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = temp;
            } 
}

void getEmployeeData(employee myArray[], int arraySize)
{
    const int FIELD_WIDTH = 24;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Entering data for employee number " << i + 1 << "." << endl << endl;
        cout << setw(FIELD_WIDTH) << "First Name:\t";
        cin >> myArray[i].firstName;
        
        cout << setw(FIELD_WIDTH) << "Last Name:\t";
        cin >> myArray[i].lastName;
        
        cout << setw(FIELD_WIDTH) << "Age:\t";
        cin >> myArray[i].age;
        
        cout << setw(FIELD_WIDTH) << "Service (in months):\t";
        cin >> myArray[i].serviceInMonths;
        
        cout << setw(FIELD_WIDTH) << "Salary:\t";
        cin >> myArray[i].currentSalary;
        
        cout << setw(FIELD_WIDTH) << "Annual Performance:\t";
        cin >> myArray[i].annualPerformance;
        
        cout << endl << endl;
    }
}

void printDatabase(employee myArray[], int arraySize)
{
    cout << setw(12) << "First Name" << setw(12) << "Last Name"
    << setw(4) << "Age" << setw(8) << "Service" << setw(8) << "Salary"
    << setw(12) << "Performance" << endl;
    
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(12) << myArray[i].firstName << setw(12) << myArray[i].lastName
        << setw(4) << myArray[i].age << setw(8) << myArray[i].serviceInMonths << setw(8) <<
        myArray[i].currentSalary << setw(12) << myArray[i].annualPerformance << endl;
    }
    cout << endl;
}

void getEmployeeData(employee myArray[], int arraySize)
{
    const int FIELD_WIDTH = 24;
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Entering data for employee number " << i + 1 
			<< "." << endl << endl;
        cout << setw(FIELD_WIDTH) << "First Name:\t";
        cin >> myArray[i].firstName;
        
        cout << setw(FIELD_WIDTH) << "Last Name:\t";
        cin >> myArray[i].lastName;
        
        cout << setw(FIELD_WIDTH) << "Age:\t";
        cin >> myArray[i].age;
        
        cout << setw(FIELD_WIDTH) << "Service (in months):\t";
        cin >> myArray[i].serviceInMonths;
        
        cout << setw(FIELD_WIDTH) << "Salary:\t";
        cin >> myArray[i].currentSalary;
        
        cout << setw(FIELD_WIDTH) << "Annual Performance:\t";
        cin >> myArray[i].annualPerformance;
        
        cout << endl << endl;
    }
}

void printDatabase(employee myArray[], int arraySize)
{
    cout << setw(12) << "First Name" << setw(12) << "Last Name"
    << setw(4) << "Age" << setw(8) << "Service" << setw(8) << "Salary"
    << setw(12) << "Performance" << endl;
    
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(12) << myArray[i].firstName 
			<< setw(12) << myArray[i].lastName
    			<< setw(4) << myArray[i].age 
			<< setw(8) << myArray[i].serviceInMonths 
			<< setw(8) << myArray[i].currentSalary 
			<< setw(12) << myArray[i].annualPerformance << endl;
    }
    cout << endl;
}
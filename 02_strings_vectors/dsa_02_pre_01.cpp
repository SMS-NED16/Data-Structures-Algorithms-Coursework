#include <iostream>
#include <string>
using namespace std;

int main()
{
    string  theString;
    
    cout << "Enter a string to test if it is a palindrome." << endl;
    getline(cin, theString);

    int length = theString.length();                    
	//used for parsing string
    bool isNotPalindrome = false;                       
	//initially assume is a palindrome
    
    //compare first half with second half
    for (int i = 0; i < length/2; i++)
        if(theString[i] != theString[length - i - 1])   
        {                                              
            isNotPalindrome = true;                   
            break;                                     
        }   //end if
    //end for
    
    if (isNotPalindrome)
        cout << theString << " is not a palindrome." << endl;
    else
        cout << theString << " is a palindrome." << endl;
    
    return 0;
}//end main
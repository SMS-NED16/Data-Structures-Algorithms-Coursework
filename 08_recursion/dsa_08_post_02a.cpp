#include<iostream>
#include<string>
using namespace std;

bool isPal(const string str, int start, int end);

int main ()
{
    string my_word,str;
    cout<<"Enter word to be checked: ";
    getline(cin, my_word);
    
    if (isPal(my_word, 0, my_word.length()-1))
        cout<<"\nThe word you entered is a Palindrome\n\n";
    else
        cout<<"\nThe word you entered is not a Palindrome\n\n";
    
    return 0;
}

bool isPal(const string str, int start, int end)
{
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return isPal(str, ++start, --end);
}


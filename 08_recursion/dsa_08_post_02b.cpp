# include<iostream>
#include<string>
using namespace std;

bool isPal(const string my_word);

int main ()
{
    string my_word;
    cout<<"Enter word to check if it is a palindrome : ";
    getline(cin, my_word);
    if(isPal(my_word))
        cout<<"\nThe word you entered is a Palindrome\n\n”;
    else
        cout<<"\nThe word you entered is not a Palindrome\n\n";
    
	return 0;
}

bool isPal(const string my_word)
{
    int start=0, end=my_word.length()-1;
    while (start < end)
    {
        if (my_word[start++] != my_word[end--])
            return false;
    }
    return true;
}

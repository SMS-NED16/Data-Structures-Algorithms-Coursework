// Static Variables and Recursion: Program demonstrates
// concept of static variable use in recursion
#include<iostream>
using namespace std;

/*a recursive function
 NOTE: This is a dangerous recursive function
 that only has inductive step - no base case*/
void recursive(void);

int main(void)
{
    recursive();
    
    return 0;
}

void recursive(void)
{
    int a = 10; 			//reinit to 10 with every recursive call
    static int b = 10; 	//value will be same as at end of last call
    
    cout << endl << " a = " << a << ", " << " b = " << b << endl;
    a++;
    b++;
    getchar();
    recursive();
}

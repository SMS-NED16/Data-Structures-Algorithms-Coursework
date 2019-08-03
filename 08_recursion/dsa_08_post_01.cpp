#include <iostream>
#include <cmath>
using namespace std;

double my_exp(double x);
int factorial(int y);

int main ()
{
    double x;
    cout<<"Enter the Power of Exponential you want to calculate = ";
    cin>>x;
    cout<<"\nexponent("<<x<<") = "<<my_exp(x)<<endl<<endl;
    return 0;
}

double my_exp(double x)
{
    static int a = 0;
    static double prev_term = 1, new_term = 0, temp = 0;
    if(fabs(prev_term - new_term) > 0.0001)
    {
        prev_term = temp;
        new_term = prev_term + (pow(x,a)/factorial(a));
        temp = new_term;
        a++;
        return my_exp (x);
    }
    else
        return new_term;
}

int factorial(int y)
{
    int i;
    int F = 1;
    for (i = 1; i <= y; i++)
        F *= i;
    return F;
}

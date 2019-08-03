#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int LIM=10;
    float num[LIM];
    srand(time(NULL));      //seed random number generator
    
    time_t start = time(0); //time at start of programme
    
    //EVEN NUMBERS
    cout << "Automatic initialization with even numbers" << endl;
    for(int i=0;i<LIM;i++)
        num[i]=(i+1)*2;
    cout << "Numbers generated. \nPress any key to continue";
    getchar();
    for(int i=0;i<LIM;i++)
        cout<<"\nElement no."<<i<<"="<<num[i];
    cout<<"\nPress any key to continue";
    getchar();
    
    cout<<endl<<endl;
    
    //RANDOM NUMBERS
    cout << "Automatic initialization with random numbers." << endl;
    for(int i=0;i<LIM;i++)
        num[i]=(rand()%100)+1;
    cout<<"Numbers generated.\nPress any key to continue";
    getchar();
    for(int i=0;i<LIM;i++)
        cout<<"\nElement no."<<i<<"="<<num[i];
    cout<<endl<<endl;
    
    time_t end = time(0);                 //time at end of programme
    cout << "Total time taken by programme:\t "
        << end - start << "s" << endl;    //total time taken by programme
    
    cout << "END OF PROGRAMME" << endl;
    return 0;
}


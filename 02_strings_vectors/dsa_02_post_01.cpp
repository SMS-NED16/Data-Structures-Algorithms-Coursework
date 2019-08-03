#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    //seeding random number generator
    srand(time(NULL));
    
    //totalNumbers - number of values, lower/upper - min and max values
    int totalNumbers, lowerLimit, upperLimit;
    
    //vectors for values and their frequencies
    vector<int> randomNumbers, frequency;
    
    //Get input from user
    cout << "How many numbers would you like to generate?" << endl;
    cin >> totalNumbers;
    
    cout << "Lower limit for random numbers?" << endl;
    cin >> lowerLimit;
    
    cout << "Upper limit for random numbers?" << endl;
    cin >> upperLimit;
    
    //one index per random value in the frequency vector
    frequency.resize(upperLimit - lowerLimit + 1);
    
    //entering 10 random numbers into vector
    for (int i = 0; i < totalNumbers; i++)
        randomNumbers.push_back(lowerLimit + rand()%upperLimit);
    
    //echoing random numbers generated
    cout << "\nGenerated " << totalNumbers << " random numbers "
    << "between " << lowerLimit << " and " << upperLimit << endl;

       for (int i = 0; i < randomNumbers.size(); i++)
    {
        cout << randomNumbers[i] << "\t";
        if ((i + 1) % 10 == 0)      //newline every 10 values
            cout << endl;
    }
    cout << endl;
    
    //THE MAGIC
    //first element of frequency - lowerLimit's frequency
    //second element of frequency - (lowerLimit + 1)'s frequency...
    //nth element of frequency - (lowerLimit + n)'s frequency
    for (int i = 0; i < randomNumbers.size(); i++)
        for (int j = 0; j < frequency.size(); j++)
            if (randomNumbers[i] == lowerLimit + j)
                frequency[j]++;
    
    //echoing frequency distribution
    cout << "Frequency Distribution" << endl;
    for (int i = 0; i < frequency.size(); i++)
        cout << i + 1 << "\t" << frequency[i] << endl;
    
    cout << "\nEND OF PROGRAMME" << endl;
    return 0;
}//end main

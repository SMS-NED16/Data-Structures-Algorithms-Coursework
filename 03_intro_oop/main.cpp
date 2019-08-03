#include "Person.h"
#include "DataArray.h"

int main()
{
    int maxSize = 100;                  //array size
    ClassDataArray arr(maxSize);        //array
    
    arr.insert("Evans", "Patty", 24);   //insert 10 items
    arr.insert("Smith", "Lorraine", 37);
    arr.insert("Yee", "Tom", 43);
    arr.insert("Adams", "Henry", 63);
    arr.insert("Hashimoto", "Sato", 21);
    arr.insert("Stimson", "Henry", 29);
    arr.insert("Velasquez", "Jose", 72);
    arr.insert("Lamarque", "Henry", 54);
    arr.insert("Vang", "Minh", 22);
    arr.insert("Creswell", "Lucinda", 18);
    
    arr.displayA();                     //display items
    
    string searchKey = "Stimson";       //search for item
    cout << "Searching for Stimson" << endl;
    Person* found;
    found=arr.find(searchKey);
   
   if(found != NULL)
    {
        cout << "   Found ";
        found->displayPerson();
    }
    else
        cout << "   Can't find " << searchKey << endl;
    
    cout << "Deleting Smith, Yee, and Creswell" << endl;
    arr.remove("Smith");                //delete 3 items
    arr.remove("Yee");
    arr.remove("Creswell");
    
    arr.displayA();                     //display items again
    return 0;
}  //end main()
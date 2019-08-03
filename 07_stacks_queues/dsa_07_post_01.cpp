#include <iostream>
#include <string>
#include <vector>
using namespace std;
class StackX
   {
   private:
      int maxSize;                     //size of stack vector
      vector<double> stackVect;        //stack vector
      int top;                         //top of stack
   public:
//--------------------------------------------------------------
   StackX(int s);
//--------------------------------------------------------------
   void push(double j);                 //insert item
//--------------------------------------------------------------
   double pop();                        //decrement top
//--------------------------------------------------------------
   double peek();
//--------------------------------------------------------------
   bool isEmpty();
//--------------------------------------------------------------
   bool isFull();
//--------------------------------------------------------------
};

 StackX::StackX(int s) : maxSize(s), top(-1) //constructor
      {
      stackVect.reserve(maxSize);      //size the vector
      }

void StackX::push(double j)                 //put item on top
      {
      stackVect[++top] = j;            //increment top,
      }

double StackX::pop()                        //take item from top
      {
      return stackVect[top--];         //access item,
      }

double StackX::peek()                       //peek at top of stack
      {
      return stackVect[top];
      }

bool StackX::isEmpty()                      //true if stack is empty
      {
      return (top == -1);
      }

bool StackX::isFull()                       //true if stack is full
      {
      return (top == maxSize-1);
      }
//end class StackX
////////////////////////////////////////////////////////////////

// BracketChecker Class
class BracketChecker
   {
   private:
      string input;                        //input string
   public:
//--------------------------------------------------------------
   BracketChecker(string in);
//--------------------------------------------------------------
   void check();
//--------------------------------------------------------------
   };

BracketChecker::BracketChecker(string in) : input(in)   //constructor
      {  }

   void BracketChecker::check()
      {
      int stackSize = input.length();      //get max stack size
      StackX theStack(stackSize);          //make stack
      bool isError = false;                //error flag
            for(int j=0; j<input.length(); j++)  //get chars in turn
         {
         char ch = input[j];               //get char
         switch(ch)
            {
            case '{':                      //opening symbols
            case '[':
            case '(':
               theStack.push(ch);          //push them
               break;

            case '}':                      //closing symbols
            case ']':
            case ')':
               if( !theStack.isEmpty() )   //if stack not empty,
                  {
                  char chx = theStack.pop();  //pop and check
                  if( (ch=='}' && chx!='{') ||
                      (ch==']' && chx!='[') ||
                      (ch==')' && chx!='(') )
                     {
                     isError = true;
                     cout << "Mismatched delimeter: "
                          << ch << " at " << j << endl;
                     }
                  }
               else                        //prematurely empty
                  {
                  isError = true;
                  cout << "Misplaced delimiter: "
                       << ch << " at " << j << endl;
                  }
               break;
            default:    //no action on other characters
               break;
            }  //end switch
         }  //end for
      //at this point, all characters have been processed
      if( !theStack.isEmpty() )
         cout << "Missing right delimiter" << endl;
      else if( !isError )
         cout << "OK" << endl;
      }  //end check()
//end class BracketChecker
////////////////////////////////////////////////////////////////

int main()
{
    cout << "This programme tests the StackX and BracketChecker classes" << endl;
    cout << "By using them for delimiter matching." << endl;
    
    string input;
    while(true)
    {
        cout << "Please enter a string with delimiters and without whitespace." << endl;
        cin >> input;
        if( input.length() == 1 )
            break;
        
        BracketChecker theChecker(input);
        theChecker.check();
    }  //end while
    return 0;
}  //end main()
/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 31, 2021 2:37 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    char    char1,      //these are the variables for the characters being types in 
            char2,      //we must use "char" because the input might include letters
            char3,      //instead of numbers
            char4;
    
    int     num1,       //I will use these "int" variables to convert char values
            num2,       //to their ASCII values and then turn into int 0-9 or turn into
            num3,       // and integer equal to it's ASCII value
            num4;
    
    //Input or initialize values Here
    
    num1=num2=num3=num4=0;      //always initialize just in case
    
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>char1;
    cin>>char2;
    cin>>char3;
    cin>>char4;
    
    
    //the following code converts my char values into integers 0-9
    //or leaves them as the origical "non-number" character
    
    if (char4>=48&&char4<=57)
            num4=char4-48;
    else    num4=char4;


     if (char3>=48&&char3<=57)
            num3=char3-48;
    else    num3=char3;
    
     if (char2>=48&&char2<=57)
            num2=char2-48;
    else    num2=char2;

    if (char1>=48&&char1<=57)
            num1=char1-48;
    else    num1=char1;


   
    //Histogram Here
    
   //now i check if the values are between 0-9
   //if so, run a "while" loop to add "*"
   //if value greater than 9, then just add "?"
   //I originally tried creating a function called STARPOWER()
   //that ran the "while" loops for me, but for some unknown reason
   //it would crash or time our CODE-E. So i did it the long way.
   
   //Sorry.
   
    cout<<char4;
    if(num4>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num4)
        { cout<<"*";
            count++;
        }
        cout<<endl;
        
    }
    
    
    cout<<char3;
    if(num3>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num3)
        { cout<<"*";
            count++;
        }
        cout<<endl;
    }
    
    
    cout<<char2;
    if(num2>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num2)
        { cout<<"*";
            count++;
        }
        cout<<endl;
    }
    
    cout<<char1;
    if(num1>9)
        cout<<" ?"<<endl;
    else 
    {int count=1;
        cout<<" ";
        while(count<=num1)
        { cout<<"*";
            count++;
        }
        cout<<endl;
    }
    
    //Exit
    return 0;
}
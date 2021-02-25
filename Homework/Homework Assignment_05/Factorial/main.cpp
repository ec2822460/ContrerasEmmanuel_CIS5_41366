/* 
 * Author: Emmanuel Contreras
 * Created on January 26, 2021 5:06 PM
 * Purpose:  creating Function for factorials
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

int fctrl(int inpt)
{   int facto=1;
    for(int n=1; n<=inpt; n++)
    {
        facto=facto*n;
    }
    return facto;
}  

  
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inpt,   //the input variable
        facto;   //the factorial
    
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>inpt;
    
    //Process/Map inputs to outputs
    facto=fctrl(inpt);
    //Output data
    cout<<inpt<<"! = "<<facto;
    //Exit stage right!
    return 0;
}



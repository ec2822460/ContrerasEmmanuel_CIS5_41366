/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 7:10 PM
 * Purpose:  Creating a pattern (triangle?)
 */

//System Libraries
#include <iostream>  //I/O Library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int inpt,   //inputted number "10"
        width,  //counter for width of row
        count;  //universal counter
    
    //Initialize Variables
    cin>>inpt;
    //Map Inputs to Outputs -> Process
    for (width=1;width<=inpt;width++)
    {   for(count=1;count<=width;count++)
            {cout<<"+";
            }
    cout<<endl;
    cout<<endl;
    }
    
    for (width=inpt; width>=2; width--)
    {   for(count=1;count<=width;count++)
            {cout<<"+";
            }
    cout<<endl;
    cout<<endl;
    }
    cout<<"+";
    
    //Display Inputs/Outputs
   
    
    //Exit the Program - Cleanup
    return 0;
}
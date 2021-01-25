/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 6:46 PM
 * Purpose: creating a rectangle using a number and letter
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
    int numb,   //the number entered
        width,  //the counter for width of rectangle before "endl" command
        count;  //the universal counter
        
 
            
    char letter;        
    //Initialize Variables
    cin>>numb;
    cin>>letter;
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    for (width = 2; width<= numb; width++)
    {
        for (count=1; count<=numb; count++)
            cout<<letter;
        cout<<endl;
    }
    
    for (count=1; count<=numb; count++)
            cout<<letter;
    
    //Exit the Program - Cleanup
    return 0;
}
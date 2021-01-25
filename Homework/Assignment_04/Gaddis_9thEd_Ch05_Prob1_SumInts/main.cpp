/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 4:57 PM
 * Purpose:  Sum of all integers under given integer input
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int numInpt,        //variable for the inputted integer
        sum;         //the variable that holds the Summation
            
    
    //Initialize Variables
         cin>>numInpt;  
         sum=0;
            
    
    //Map Inputs to Outputs -> Process
    do 
    {
        sum += numInpt;
        numInpt -= 1;
    
    } while (numInpt>0);
            
    //Display Inputs/Outputs
    
    cout<<"Sum = "<<sum;
    
    //Exit the Program - Cleanup
    return 0;
}
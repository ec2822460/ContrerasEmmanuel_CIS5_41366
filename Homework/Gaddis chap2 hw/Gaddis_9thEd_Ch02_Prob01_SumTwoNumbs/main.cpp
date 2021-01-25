/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 1:51 PM
 * Purpose: Sum of Two Numbers assignment problem #1 
 *           To be copied for each Assignment Problem
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
    unsigned short int 
                        numb1, // the first integer variable
                        numb2, // the second integer variable
                        total; // variable that stores sum of variables
                        
    //Initialize Variables
    numb1=50;
    numb2=100;
    
    
    //Map Inputs to Outputs -> Process
    total= numb1 + numb2;
    //Display Inputs/Outputs
    cout<<"The Total Sum of "<<numb1<<" and "<<numb2<<" = "<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
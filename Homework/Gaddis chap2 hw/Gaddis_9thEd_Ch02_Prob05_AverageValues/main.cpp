/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 4:45 PM
 * Purpose:  Average of Values Assignment Problem #5
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
    float var1,     //This is my first variable
            var2,   //This is my second variable
            var3,   //This is my first variable
            var4,   //This is my first variable
            var5,   //This is my first variable
            sum,    //This is the sum or all my variables
            avgSum; //this will be the average of my variables
    //Initialize Variables
    var1=28;
    var2=32;
    var3=37;
    var4=24;
    var5=33;
    
    //Map Inputs to Outputs -> Process
    sum= var1 + var2 + var3 + var4 + var5;
    avgSum= sum / 5;
    
    //Display Inputs/Outputs
    cout<<"The Average of 28, 32, 37, 24, 33 = "<<avgSum<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 5:29 PM
 * Purpose:  Miles Per Gallon Assignment Problem #10
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
    float gasTnk,   //The number of gallons the car gas tank can hold
          milesDrv, //The number of miles driven before refueling
            MPG;    //The Miles per Gallon efficiency of the car
    
            
    //Initialize Variables
    gasTnk=15;
    milesDrv=375;
    //Map Inputs to Outputs -> Process
            MPG = milesDrv / gasTnk;
    
    //Display Inputs/Outputs
    cout<<"The car's Miles Per Gallon (MPG) rating = "<<MPG<<" miles/gallon"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
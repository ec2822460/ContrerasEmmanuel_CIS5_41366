/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 12, 2021, 6:55 PM
 * Purpose:  Assignment Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //learned from Thursday Video from Student
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float milBdgt,
            fedBdgt,
            mlPrcnt;

    //Initialize Variables
    milBdgt=7.0e11f;    //Military Budget = 700 Billion   
    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    //Map Inputs to Outputs -> Process
    mlPrcnt= (milBdgt / fedBdgt)*100;
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);//learned from Thursday Video from Student
    cout<<"The Military Budget is "<<mlPrcnt<<"% of the Federal Budget"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
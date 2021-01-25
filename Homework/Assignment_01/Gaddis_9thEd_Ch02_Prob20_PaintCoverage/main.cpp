/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 5, 2021, 8:30 PM
 * Purpose:  How Much Paint Assignment Problem #20
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
    unsigned short height, //Height of Fence in Feet
                   length, //Length of Fence in Feet
                   pntCov, //Paint Coverage / can in square feet
                  srfArea, //Surface Area to Paint in square feet
                  numbGlns; //Number of Gallons of Paint
    
    //Initialize Variables
    height=6;
    length=100;
    pntCov=340;
    
    //Map Inputs to Outputs -> Process
    srfArea=2*2*height*length;    //professor says we are painting the front
                                  //and back of fence TWICE! hence, 2*2
    numbGlns=srfArea/pntCov +1; //we added +1 because we have to round up gallons
                                //cannot use partial gallon without buying it
    
    //Display Inputs/Outputs
    cout<<"Number of Gallons required = "<<numbGlns<<" to paint a ";
    cout<<height<<" x "<<length<<" square foot fence front and back twice!"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 15, 2021, 7:54 PM
 * Purpose:  Calculating Room Capacity and Compliance
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int roomMx,     //Room Capacity per Fire Code
        numPpl,     //Number of people that have entered the Room
        addPpl,     //Additional number of people that may enter the room
        rmvPpl;     //Amount of people that need to be removed from room
            
            
            
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>roomMx>>numPpl;
    
    //Map inputs -> outputs
    addPpl = roomMx - numPpl;
    rmvPpl = numPpl - roomMx;
        
    //Display the outputs
    if (numPpl <= roomMx)
        cout<<"Meeting can be held."<<endl,
        cout<<"Increase number of people by "<<addPpl<<" will be allowed without violation.";
    if (numPpl > roomMx )
        cout<<"Meeting cannot be held."<<endl,
        cout<<"Reduce number of people by "<<rmvPpl<<" to avoid fire violation.";
           
    //Exit stage right or left!
    return 0;
}
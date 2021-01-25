
/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 5:40 PM
 * Purpose:  Distance per Tank of Gas Assignment Problem #11
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
    float gasTnk,       //amount of gallons car gas tank can hold
            mpgTwn,     // the MPG of car while driving in town
            mpgHwy,     // the MPG of car while driving on Highway
            milesTwn,   //Amount of Miles car can drive on one tank of gas in town
            milesHwy;   //amount of miles car can drive on one tank of gas on Highway
    //Initialize Variables
            gasTnk=20,
            mpgTwn=23.5,
            mpgHwy=28.9;
    
    //Map Inputs to Outputs -> Process
    milesTwn= gasTnk * mpgTwn;
    milesHwy= gasTnk * mpgHwy;
    
    //Display Inputs/Outputs
    cout<<"On one tank of Gas the car can drive "<<milesTwn<<" miles in town"<<endl;
    cout<<"On one tank of Gas the car can drive "<<milesHwy<<" miles on the highway"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
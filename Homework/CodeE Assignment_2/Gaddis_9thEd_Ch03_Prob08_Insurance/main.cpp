/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 13, 2021, 11:21 PM
 * Purpose:  Calculating Property Insurance 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float repCost, //this variable is the replacement cost
            propIns; //this variable will be used to obtain 80%
  
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>repCost;  //this is where you input your replacement cost
    
    //Map inputs -> outputs
    propIns= repCost * 0.8; //this calculates insurance @ 80% of Cost
    //Display the outputs
    cout<<"You need $"<<propIns<<" of insurance.";

    //Exit stage right or left!
    return 0;
}
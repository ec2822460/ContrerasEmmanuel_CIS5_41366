/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 13, 2021, 11:08 PM
 * Purpose:  Calculating Calories from Cookies
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
    float cookie,
            calories;
    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    
    //Map inputs -> outputs
    calories= cookie * 75;
    
    //Display the outputs
    cout<<"You consumed "<<calories<<" calories.";
    //Exit stage right or left!
    return 0;
}
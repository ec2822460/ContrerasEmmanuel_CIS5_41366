/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 15, 2021, 9:58 PM
 * Purpose:  Gross pay Calculator / paycheck
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
    int regHrs,     //regular hours worked
        ovrHrs,     //overtime hours worked
        ttlHrs;     //total hours worked
    
    float gropay, //amount in dollars earned
          payrt;    //employee's regular pay rate
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payrt;
    cin>>ttlHrs;
    
    ovrHrs=(ttlHrs>40)?ttlHrs:40;  //this will find if there are any overtime hours
    regHrs=(ttlHrs<40)?ttlHrs:40;  //this will give us any hours under 40
    ovrHrs=ovrHrs-40;               //this will be our terminator
    
    
    //Map inputs -> outputs
    gropay= (regHrs * payrt) + (ovrHrs * (2 * payrt));
    
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Paycheck = $"<<setw(7)<<gropay;
    
    

    //Exit stage right or left!
    return 0;
}
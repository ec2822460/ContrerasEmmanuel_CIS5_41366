/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 15, 2021, 7:27 PM
 * Purpose: Calculating Retroactive Pay and new Salary
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
    float oldAnn,       //Old Previous Annual Salary
          payInc,       //pay rate increase percentage
          retPy,        //Retroactive pay amount owed to employees
          newAnn,       //New Annual Salary
          mthSal;       //New Monthly Salary
    
    //Initialize or input i.e. set variable values
    
      
    cout<<"Input previous annual salary."<<endl;
    cin>>oldAnn;
    
    payInc = 0.076f;
    
    //Map inputs -> outputs
    retPy   = (oldAnn / 2.0) * payInc;
    newAnn  = oldAnn * (1 + payInc);
    mthSal  = newAnn / 12.0; 
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<retPy<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newAnn<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<mthSal;
    //Exit stage right or left!
    return 0;
}
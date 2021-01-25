
/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 4:54 PM
 * Purpose:  Annual Pay Assignment Problem #6
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
    float payAmnt,
            payPrds,
            annlPay;
    
    //Initialize Variables
    payAmnt= 2200.00;
    payPrds= 26;
    
    //Map Inputs to Outputs -> Process
    annlPay = payAmnt * payPrds;
    //Display Inputs/Outputs
    cout<<"Your Annual Pay for this year shall be $"<<annlPay<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
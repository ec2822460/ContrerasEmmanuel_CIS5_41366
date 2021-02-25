/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on February 21, 2021, 11:25 AM
 * Purpose:  Calculating the Present value deposit needed 
 * to obtain desired future value
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float psntVal(float futVal, float apr, int years);      //the function per HW instructions


//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    
    //Declare Variables
    float prstVal,      //the present value neeeded to be deposited
            futVal,     //the future value desired
            intRate,    //interest rate in %/year   
            apr;        //the Annual Percentage rate in decimal form
    
    int years;          //number of years receving interest
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>futVal;
    cout<<"Input the Number of Years"<<endl;
    cin>>years;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intRate;
    
    
    //Map Inputs to Outputs -> Process
    apr=intRate/100;                    //how i convert an integer interest rate to decimal apr
    
    prstVal=psntVal(futVal, apr, years);    //the function  
    
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2);
    cout<<"The Present Value = $"<<prstVal;
    
    //Exit the Program - Cleanup
    return 0;
}

float psntVal(float futVal, float apr, int years){
   float pval;
   pval=futVal/pow((1+apr),years);      //the formula as provided by professor 
    return pval;
}
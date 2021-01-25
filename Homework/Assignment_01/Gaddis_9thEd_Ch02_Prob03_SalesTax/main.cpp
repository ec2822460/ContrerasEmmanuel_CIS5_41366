/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 2:59 PM
 * Purpose: Sales Tax Assignment Problem #3
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip> //learned from thursday video from student
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float subTtl,        //this is the purchase price before tax
            stPerct,     //state tax percent 
            cntyPerct,   //county tax percent
            stTx,        //this is the state sales tax amount
            cntyTx,    //this is the County sales tax amount
            totalTx,     //this is the total in taxes for sale
            saleTtl;     //this is the total for sale with tax
    
    //Initialize Variables
    subTtl=95;
    stPerct=0.04;
    cntyPerct=0.02;
    
    //Map Inputs to Outputs -> Process
    stTx = subTtl * stPerct;
    cntyTx = subTtl * cntyPerct;
    totalTx = stTx + cntyTx;
    saleTtl = subTtl + totalTx;
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2); //learned from thursday video from student
    cout<<"Here is the purchase breakdown for today:"<<endl;
    cout<<"Cost of item:       $"<<subTtl<<endl;
    cout<<"State Sales Tax:    $"<<stTx<<endl;
    cout<<"County Sales Tax:   $"<<cntyTx<<endl;
    cout<<"Total Sales Tax:    $"<<totalTx<<endl;
    cout<<"__________________________"<<endl;
    cout<<"Today's Sale Total: $"<<saleTtl<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
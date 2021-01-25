/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 2:16 PM
 * Purpose:  Sales Prediction assignment problem #2
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
    float eastCst,      //this variable will be defined by East Coast Percentage
            compTtl,    //this variable represents company total sales
            eastCstTtl; //this variable represents east coast sales total money 
            
    //Initialize Variables
    eastCst=0.58;
    compTtl=8.6;
    //Map Inputs to Outputs -> Process
            eastCstTtl = compTtl * eastCst; 
    //Display Inputs/Outputs
            cout<<"The East Coast Sales Division will generate $"<<eastCstTtl<<
                    " million in sales this year!"<<endl;
    //Exit the Program - Cleanup
    return 0;
}
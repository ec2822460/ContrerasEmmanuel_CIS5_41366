/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 6:29 PM
 * Purpose:  taking numbers and giving out largest and smallest
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int numb,       //the numbers inputted
        smlst,      //smallest number in series
        lrgst;      //largest number in the series
    
    //Initialize Variables
    cin>>numb;
    
    smlst = lrgst = numb;
    
    //Map Inputs to Outputs -> Process
    
    while (numb != -99)
    {
        if (numb < smlst)
            smlst = numb;
        
        if (numb > lrgst)
            lrgst = numb;
        
        cin>>numb;
    }
    
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<smlst<<endl;
    cout<<"Largest  number in the series is "<<lrgst;
    
    //Exit the Program - Cleanup
    return 0;
}
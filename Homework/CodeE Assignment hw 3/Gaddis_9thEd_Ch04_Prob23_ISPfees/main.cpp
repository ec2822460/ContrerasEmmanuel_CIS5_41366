/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 17, 2021, 9:15 AM
 * Purpose:  ISP fees based on packages and fees
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
    char pkge;      //this is the ISP package choice
    
    int hrsUsd,     //customer hour usage
        hrsLmt,     //the Limit hours pon a package
        ovrHrs;     //variable for amount of hours over limit
    
    float mthChrg,      //this is the monthly charge for each package
          totChrg;      //this is the TOTAL charge for all fees
    
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pkge>>hrsUsd;
    
    //Map Inputs to Outputs -> Process
    switch(pkge)
    {
        case 'A':
        {  mthChrg = 9.95f;
           hrsLmt   = 10;
           ovrHrs   = 2;  
           break;
        }
        
        case 'B':
        {  mthChrg = 14.95f;
           hrsLmt   = 20;
           ovrHrs   = 1;  
           break;
        }
    
        case 'C':
        {  mthChrg = 19.95f;
           hrsLmt   = 0;
           ovrHrs   = 0;  
           break;
        } 
        
        default:cout<<pkge<<" is not a valid choice. Please chose package A, B or C."<<endl;
    }
    
    if (hrsUsd>744)
        cout<<hrsUsd<<" is beyond the allowed bandwidth."<<endl;
    
    if (hrsUsd>hrsLmt)
        totChrg= (hrsUsd - hrsLmt)*ovrHrs + mthChrg;
    else totChrg= mthChrg;    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2);
    cout<<"Bill = $ "<<setw(5)<<totChrg;
    
    //Exit the Program - Cleanup
    return 0;
}
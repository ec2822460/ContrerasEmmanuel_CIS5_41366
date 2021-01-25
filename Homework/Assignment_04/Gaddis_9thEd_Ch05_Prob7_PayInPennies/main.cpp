/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 5:22 PM
 * Purpose:  Calculating Pay in Pennies (or doubling pennies)
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
    int     days,   //input number of days pennies have been doubling
            totPns, //total number of pennies
            pnns,   //amount in pennies
            count;  //counter
    
            
            
            
    //Initialize Variables
    pnns=1;
   
    cin>>days; 
   
            
    //Map Inputs to Outputs -> Process
            
    if (days==0)
        {cout<<"input "<<days<<" is invalid";
        }
    for (count=0;count<days;count++)
    {   totPns= totPns + pnns;
        pnns= pnns*2;
        
    }
                
    //Display Inputs/Outputs
    cout<<"Pay = $"<<totPns/100<<".";
    if ((totPns%100)<10)
        {cout<<"0"<<totPns%100;
        }
    else if ((totPns%100)>=10)
        {cout<<totPns%100;
        }
    //Exit the Program - Cleanup
    return 0;
}
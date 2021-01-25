/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 10:05 PM
 * Purpose:  Inflation Calculator 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float INFLRT(float, float);
    float INFLRT(float current, float previous)
    {
        return (current-previous)/previous;
    }

    
float INCR(float, float);
    float INCR(float current, float percent)
    {
        return current * (1+ percent);
    }
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   current,
            previous,
            crtPrc,     //current Price
            prvPrc,     //previous price
            prct,       //Inflation Percent Value
            fstIncr,    //First increase after inflation
            sndIncr;    //Second increase after Inflation
            
    char    choice;       
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
      do
    {
     cout<<"Enter current price:"<<endl;
    cin>>crtPrc;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prvPrc;
    
    prct=INFLRT(crtPrc,prvPrc);
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Inflation rate: "<<prct*100<<"%"<<endl;
    cout<<endl;
    
    fstIncr= INCR(crtPrc,prct);
    sndIncr= INCR(fstIncr,prct);
    
    
    cout<<"Price in one year: $"<<fstIncr<<endl;
    cout<<"Price in two year: $"<<sndIncr<<endl;
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');  
    

    
    //Display Inputs/Outputs
    
    
    //Exit the Program - Cleanup
    return 0;
}
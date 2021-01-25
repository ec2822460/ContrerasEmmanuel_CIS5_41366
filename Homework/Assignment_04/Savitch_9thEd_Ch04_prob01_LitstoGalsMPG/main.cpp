/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 7:37 PM
 * Purpose: Converting Litters to Gallons of Gas and calculating MPG
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float MPGCONV(float, float);
    float MPGCONV(float miles, float gallons)
    {
        return miles/gallons;
    }
    
//Execution Begins Here
int main(int argc, char** argv){
    //Initialize the Random Number Seed
    
    //Declare Variables
    float lits,     //amount of liters used by car
          gals,     //amount of gallons after conversion
          mls,      //amount of miles driven
          miles,
          gallons;
    
    char choice;
          
    //Initialize Variables
    float LITS2GALS=0.264179f;
    
   
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    do
    {
     cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lits;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mls;
    cout<<endl;
    gals= lits*LITS2GALS;
  

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"miles per gallon:"<<endl;
    cout<<MPGCONV(mls,gals)<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');   
    
    //Exit the Program - Cleanup
    return 0;
}
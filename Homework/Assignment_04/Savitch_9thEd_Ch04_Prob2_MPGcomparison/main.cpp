/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 23, 2021, 9:45 PM
 * Purpose: Converting Litters to Gallons of Gas and calculating MPG AND CHOOSING WINNER
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
          gallons,
            MPG1,   //MPG of car1
            MPG2;   //MPG of car2
    
    char choice;
          
    //Initialize Variables
    float LITS2GALS=0.264179f;
    
   
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    do
    {
     cout<<"Car 1"<<endl;   
     cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lits;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mls;
    gals= lits*LITS2GALS;
  
    MPG1=MPGCONV(mls,gals);
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"miles per gallon: "<<MPG1<<endl;
    cout<<endl;
    
    cout<<"Car 2"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>lits;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>mls;
    gals= lits*LITS2GALS;
  
    MPG2=MPGCONV(mls,gals);
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"miles per gallon: "<<MPG2<<endl;
    cout<<endl;
    
    if (MPG1>MPG2)
        cout<<"Car 1 is more fuel efficient"<<endl;
    else cout<<"Car 2 is more fuel efficient"<<endl;
    
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
        if (choice=='y'||choice=='Y')
            cout<<endl;
    
    } while (choice=='y'||choice=='Y');   
    
    //Exit the Program - Cleanup
    return 0;
}
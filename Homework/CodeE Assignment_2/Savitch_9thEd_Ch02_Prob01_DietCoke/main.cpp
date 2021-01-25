/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 15, 2021, 6:45 PM
 * Purpose:  Diet Coke lethal dose (per soda can count)
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output Library
#include <cmath>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   
    float desWt,        //friend's desired weight in pounds (lbs)
          wtCnv,       //weight converted between lbs and grams
          lethDsg,      //lethal dosage to kill a human (proportion)
          canDth;       //amount of sweetener in 1 can soda  
                  
                  
    int   amtCns;     //amount of cans necessary to kill a person
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>desWt;
    
    wtCnv = desWt * 453.592f;
    canDth = 350 * 0.001f;
    lethDsg = 1/7.0;
    
    //Map inputs -> outputs
    
     amtCns = (wtCnv * lethDsg) / canDth;
    
    //Display the outputs
     cout<<"The maximum number of soda pop cans"<<endl;
     cout<<"which can be consumed is "<<amtCns<<" cans";

    //Exit stage right or left!
    return 0;
}
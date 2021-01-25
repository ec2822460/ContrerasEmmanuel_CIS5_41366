/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 13, 2021, 11:48 PM
 * Purpose:  Calculating Sin,Cos,Tangent from a given Degree
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angDeg,       //the degree variable
            angRad,     //the radians variable
            pi,         //variable to define pi
            rads;       //my in-between variable to convert from degrees to radians
    
            
    
    //Initialize or input i.e. set variable values
    pi=4*atan(1);
    rads=pi/180;//Conversion to Radians from Degrees
            
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angDeg;
    
    //Map inputs -> outputs
   angRad=angDeg*rads;
    
    //Display the outputs
    cout<<fixed<<setprecision(4);
    cout<<"sin("<<static_cast<int>(angDeg)<<") = "<<sin(angRad)<<endl;
    cout<<"cos("<<static_cast<int>(angDeg)<<") = "<<cos(angRad)<<endl;
    cout<<"tan("<<static_cast<int>(angDeg)<<") = "<<tan(angRad);

    //Exit stage right or left!
    return 0;
}
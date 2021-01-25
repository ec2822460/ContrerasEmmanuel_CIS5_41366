/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 13, 2021, 11:34 PM
 * Purpose:  Temperature Conversion
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    float fahren,  //this is my Fahrenheit variable
            cels;   //this is my Celsius variable
            
            
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>fahren;

    //Map inputs -> outputs
    cels=(fahren-32)*5/9;  //this is my formula
    
    
    //Display the outputs
    
    
    cout<<fixed<<setprecision(1);
    cout<<fahren<<" Degrees Fahrenheit = "<<cels<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}
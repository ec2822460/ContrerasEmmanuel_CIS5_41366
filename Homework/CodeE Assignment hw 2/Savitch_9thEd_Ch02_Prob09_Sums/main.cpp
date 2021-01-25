/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 15, 2021, 8:27 PM
 * Purpose:  Calculating the Sums of Positives or Negatives or both together 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
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
    int numb,   //the numbers being inputted
        negSum, //the sum of all negative numbers
        posSum, //the sum of all positive numbers
        totSum; //the total sum of all numbers
    
    
    //Initialize or input i.e. set variable values
    totSum=negSum=posSum=0;
    
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum = posSum + numb: negSum = negSum + numb;
    
    cin>>numb;
    numb >=0? posSum += numb: negSum += numb;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<totSum;

    //Exit stage right or left!
    return 0;
}
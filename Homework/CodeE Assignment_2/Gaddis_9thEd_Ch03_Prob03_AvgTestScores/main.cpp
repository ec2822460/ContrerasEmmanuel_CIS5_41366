/* 
 * Author: Emmanuel Contreras
 * Date: January 13, 2021
 * Purpose: Average of Test Scores
 * */

//System Libraries Here

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    float num1,num2,num3,num4,num5,
            sum,
            avg;
    
    //Input or initialize values Here
    cout<<"Input 5 numbers to average."<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    //Process/Calculations Here
    sum= num1 + num2 + num3 + num4 + num5;
    avg= sum / 5;
    
    //Output Located Here
cout<<fixed;
cout<<setprecision(1)<<"The average = "<<avg;

    //Exit
    return 0;
}
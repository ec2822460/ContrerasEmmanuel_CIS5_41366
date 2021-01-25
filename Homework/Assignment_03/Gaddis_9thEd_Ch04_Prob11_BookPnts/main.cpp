/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 16, 2021, 4:45 PM
 * Purpose:  Program to reward buyer with points per book
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
    int bkCnt;  //number of books customer has purchased this month
        
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bkCnt;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Books purchased ="<<setw(3)<<bkCnt<<endl;
    
    if (bkCnt == 0)
        cout<<"Points earned   ="<<setw(3)<<"0";
    if (bkCnt == 1)
        cout<<"Points earned   ="<<setw(3)<<"5";
    if (bkCnt == 2)
        cout<<"Points earned   ="<<setw(3)<<"15";
    if (bkCnt == 3)
        cout<<"Points earned   ="<<setw(3)<<"30";
    if (bkCnt >= 4)
        cout<<"Points earned   ="<<setw(3)<<"60";
    
    //Exit the Program - Cleanup
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 3:27 PM
 * Purpose:  Restaurant Bill Assignment Problem #4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip> // leaned from thrusday video from other student
using namespace std;


//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float mealCst,      //this is the cost for the meal itself
            taxPerct,   //this is the tax percentage
            tipPerct,   //this is the standard tip percentage
            mealTx,     //this will hold the tax based on meal
            mealCstTx,  //this will include meal and tax before tip
            mealTip,    //this will hold tip based after meal and tax
            totalBill;  //this is the total for meal including tax and tip
            
    //Initialize Variables
    mealCst=88.67;
    taxPerct=0.0675;
    tipPerct=0.2;
    //Map Inputs to Outputs -> Process
        
            mealTx = mealCst * taxPerct,
            mealCstTx = mealCst + mealTx,
           
           mealTip = mealCstTx * tipPerct,
    
            totalBill = mealCstTx + mealTip;
            
    //Display Inputs/Outputs
            cout<<fixed<<showpoint<<setprecision(2);  //learned from thursday video from other student
    cout<<"Thank you for dinning with us today!"<<endl;
    cout<<endl;
    cout<<"Here is the Breakdown for your meal:"<<endl;
    cout<<endl;
    cout<<"Cost of meal:    $"<<mealCst<<endl;
    cout<<"Tax:             $" <<mealTx<<endl;
    cout<<"Tip:             $" <<mealTip<<endl;
    cout<<"_______________________"<<endl;
    cout<<"Total for Meal:  $"<<totalBill<<endl;
    cout<<endl;
    cout<<"Thank you Come Again!"<<endl;
           
    //Exit the Program - Cleanup
    return 0;
}
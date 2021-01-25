/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 10, 2021, 5:01 PM
 * Purpose:  Total Purchase Assignment Problem #8
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;
//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float var1,         //first item variable
            var2,       //second item variable
            var3,       //third item variable
            var4,       //fourth item variable
            var5,       //fifth item variable
            subTtl,     //subtotal of all item variables
            salestax,   //sales tax on all item variables
            isalestax,  //inbetween step for rounding
            TtlPrche,   //Total price of purchase including tax
            iTtlPrche;  //inbetween step for rounding
    //Initialize Variables
    var1= 15.95;
    var2= 24.95;
    var3= 6.95;
    var4= 12.95;
    var5= 3.95;
    //Map Inputs to Outputs -> Process
    subTtl = var1 + var2 + var3 + var4 + var5;   
    isalestax = (subTtl * 0.07) * 100 + 0.5;
    salestax = (int)isalestax / 100.0;
    iTtlPrche = (subTtl *1.07) * 100 + 0.5;
    TtlPrche = (int)iTtlPrche / 100.0;
    
    
    //Display Inputs/Outputs
    cout<<"Thank you for shopping at"<<endl;
    cout<<"Manny's Discount Store Today!"<<endl;
    cout<<endl;
    cout<<"  Item 1:      $"<<var1<<endl;
    cout<<"  Item 2:      $"<<var2<<endl;
    cout<<"  Item 3:      $"<<var3<<endl;
    cout<<"  Item 4:      $"<<var4<<endl;
    cout<<"  Item 5:      $"<<var5<<endl;
    cout<<"  ___________________"<<endl;
    cout<<"  SubTotal:    $"<<subTtl<<endl;
    cout<<"  + Sales Tax: $"<<salestax<<endl;
    cout<<"  ___________________"<<endl;
    cout<<"  Total Sale:  $"<<TtlPrche<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
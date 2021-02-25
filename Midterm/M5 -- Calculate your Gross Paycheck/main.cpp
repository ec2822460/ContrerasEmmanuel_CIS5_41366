/* 
 * File:   main.cpp
 * Author: Emmanuel Contreras
 * Created on January 29, 2021 10;37 AM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
 
  
    //Calculate Paycheck
    cout<<fixed<<setprecision(2);
    
    if (hrsWrkd>40)
        cout<<"$"<<(hrsWrkd-40)*(payRate*2)+(20*(payRate*1.5))+(20*payRate)<<endl;
    
    if (hrsWrkd<=40&&hrsWrkd>20)
        cout<<"$"<<((hrsWrkd-20)*(payRate*1.5))+(20*payRate)<<endl;
    
    if (hrsWrkd<=20)
        cout<<"$"<<payRate*hrsWrkd<<endl;
    
   
        
    //Output the check
    
    
    //Exit
    return 0;
}
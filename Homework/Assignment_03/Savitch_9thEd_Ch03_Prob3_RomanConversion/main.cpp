/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 17, 2021, 11:47 AM
 * Purpose:  converting Arabic numbers to Roman numbers
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
    unsigned short int arbYr,   //this is the Arabic number to convert
                       n1000,  //variable for 1000s digit
                        n100,   //variable for 100s digit
                        n10,    //variable for 10s digit
                        n1;     //variable for 1s digit
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arbYr;
    
    n1000=(arbYr/1000)%10;
    n100=(arbYr/100)%10;
    n10=(arbYr/10)%10;
    n1=(arbYr)%10;
    
    
    //Map Inputs to Outputs -> Process
     if (arbYr<1000||arbYr>3000)
                cout<<arbYr<<" is Out of Range!";
            
            else
            {        
                cout<<arbYr<<" is equal to ";
                if(n1000==1)cout<<"M";
                if(n1000==2)cout<<"MM";
                if(n1000==3)cout<<"MMM";
                    
    
                if(n100==0)cout<<"";
                if(n100==1)cout<<"C";
                if(n100==2)cout<<"CC";
                if(n100==3)cout<<"CCC";
                if(n100==4)cout<<"CD";
                if(n100==5)cout<<"D";
                if(n100==6)cout<<"DC";
                if(n100==7)cout<<"DCC";
                if(n100==8)cout<<"DCCC";
                if(n100==9)cout<<"CM";
            
           
                if(n10==0)cout<<"";
                if(n10==1)cout<<"X";
                if(n10==2)cout<<"XX";
                if(n10==3)cout<<"XXX";
                if(n10==4)cout<<"XL";
                if(n10==5)cout<<"L";
                if(n10==6)cout<<"LX";
                if(n10==7)cout<<"LXX";
                if(n10==8)cout<<"LXXX";
                if(n10==9)cout<<"XC";    
                    
                   
                if(n1==0)cout<<"";
                if(n1==1)cout<<"I";
                if(n1==2)cout<<"II";
                if(n1==3)cout<<"III";
                if(n1==4)cout<<"IV";
                if(n1==5)cout<<"V";
                if(n1==6)cout<<"VI";
                if(n1==7)cout<<"VII";
                if(n1==8)cout<<"VIII";
                if(n1==9)cout<<"IX";
            }
                    
    //Display Inputs/Outputs
    
    
    //Exit the Program - Cleanup
    return 0;
}
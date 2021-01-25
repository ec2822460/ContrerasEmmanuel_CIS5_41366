/* 
 * File:   main.cpp
 * Author: Emmanuel M. Contreras
 * Created on January 17, 2021, 2:32 PM
 * Purpose:  Program to determine compatability with horoscopes 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string      zdk1,
                zdk2;
    
    int         horo1,  //horoscope entry 1
                horo2;  //horoscope entry 2
             
   
             
    
    //Initialize Variables
    
     
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>zdk1;
    
    cin>>zdk2;
    
            if(zdk1=="Aries")horo1=1;
            if(zdk1=="Leo")horo1=2;
            if(zdk1=="Sagittarius")horo1=3;
            if(zdk1=="Taurus")horo1=4;
            if(zdk1=="Virgo")horo1=5;
            if(zdk1=="Capricorn")horo1=6;
            if(zdk1=="Gemini")horo1=7;
            if(zdk1=="Libra")horo1=8;
            if(zdk1=="Aquarius")horo1=9;
            if(zdk1=="Cancer")horo1=10;   
            if(zdk1=="Scorpio")horo1=11;    
            if(zdk1=="Pisces")horo1=12;
    
            if(zdk2=="Aries")horo2=1;
            if(zdk2=="Leo")horo2=2;
            if(zdk2=="Sagittarius")horo2=3;
            if(zdk2=="Taurus")horo2=4;
            if(zdk2=="Virgo")horo2=5;
            if(zdk2=="Capricorn")horo2=6;
            if(zdk2=="Gemini")horo2=7;
            if(zdk2=="Libra")horo2=8;
            if(zdk2=="Aquarius")horo2=9;
            if(zdk2=="Cancer")horo2=10;   
            if(zdk2=="Scorpio")horo2=11;    
            if(zdk2=="Pisces")horo2=12;
     

    
    if (horo1>=1&&horo1<=3)
    {
    {   if(horo2>=1&&horo2<=3)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Fire signs.";
    }    
    }
    
    else if (horo1>=4&&horo1<=6)
    {
    {    if(horo2>=4&&horo2<=6)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Earth signs.";
    }
         
    }
    else if (horo1>=7&&horo1<=9)
    {
    {    if(horo2>=7&&horo2<=9)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Air signs.";
    }
    } 
    else if (horo1>=10&&horo1<=12)
    {
    {    if(horo2>=10&&horo2<=12)
            cout<<zdk1<<" and "<<zdk2<<" are compatible Water signs.";
    }
    }
    
  
    else cout<<zdk1<<" and "<<zdk2<<" are not compatible signs.";
            
   
    
    
    
            
            
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    

    //Exit the Program - Cleanup
    return 0;
}